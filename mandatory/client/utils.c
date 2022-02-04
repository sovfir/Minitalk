/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:02:30 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/03 15:02:31 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

char	*ft_strdup(const char	*s1)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen((char *) s1) + 1;
	tmp = malloc(sizeof(char) * len);
	if (!tmp)
		return (NULL);
	tmp = ft_memcpy(tmp, s1, len);
	return (tmp);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*tmp_dest;
	const char	*tmp_src;

	if (dest == src || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	tmp_dest = (char *) dest;
	tmp_src = (const char *) src;
	while (n--)
		*tmp_dest++ = *tmp_src++;
	return (dest);
}
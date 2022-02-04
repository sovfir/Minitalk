/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:24:40 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/03 15:02:26 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLIENT_H
# define CLIENT_H

# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <stdio.h>


int		main(int argc, char *argv[]);
int		ft_atoi(const char *s);
char	*ft_strdup(const char	*s1);
void	string_transmit(unsigned char c, int pid);
size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);

#endif
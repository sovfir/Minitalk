/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:24:40 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/07 14:05:17 by gjacinta         ###   ########.fr       */
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
void	string_transmit2(int i, int pid, int array[]);

#endif

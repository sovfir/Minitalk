/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjacinta <gjacinta@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:28:06 by gjacinta          #+#    #+#             */
/*   Updated: 2022/02/03 15:08:23 by gjacinta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

void	ft_reciever(int sig)
{
	static int	c;
	static int	power;

	if (sig == SIGUSR1)
		c += 1 << (7 - power);
	power++;
	if (power == 8)
	{
		ft_putchar_fd(c, 1);
		power = 0;
		c = 0;
	}
}

int	main(int argc, char **argv)
{
	struct sigaction	signal_struct;
	int	pid;

	signal_struct.sa_handler = &ft_reciever;
	if (argc == 1)
	{
		pid = getpid();
		write(1, "Server PID ", 12);
		ft_putnbr_fd(pid, 1);
		write(1, "\n", 1);
		while (5)
		{
			sigaction(SIGUSR1, &signal_struct, NULL);
			sigaction(SIGUSR2, &signal_struct, NULL);
			pause();
		}
	}
	return (0);
}
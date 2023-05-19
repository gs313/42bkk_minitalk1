/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:45:29 by scharuka          #+#    #+#             */
/*   Updated: 2023/05/19 18:38:06 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_char_by_bit(int pid, char c)
{
	int	pos;

	pos = 0;
	while (pos < 8)
	{
		if ((c & (0x01 << pos)) == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(100);
		pos++;
	}
}

int	main(int argc, char const *argv[])
{
	int	pid;
	int	i;

	i = 0;
	if (argc != 3)
		exit(1);
	pid = ft_atoi(argv[1]);
	while (argv[2][i])
	{
		ft_send_char_by_bit(pid, argv[2][i]);
		i++;
	}
	ft_send_char_by_bit(pid, '\n');
	return (0);
}

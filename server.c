/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:34:50 by scharuka          #+#    #+#             */
/*   Updated: 2023/05/19 18:01:13 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minitalk.h"

void	ft_handler(int signal)
{
	static int	pos;
	static int	i;

	if (signal == SIGUSR1)
		i |= (0x01 << pos);
	pos++;
	if (pos == 8)
	{
		ft_printf("%c", i);
		pos = 0;
		i = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("%d", pid);
	while (1)
	{
		signal(SIGUSR1, ft_handler);
		signal(SIGUSR2, ft_handler);
	}
	return (0);
}

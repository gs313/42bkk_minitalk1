/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:10:24 by scharuka          #+#    #+#             */
/*   Updated: 2023/05/19 18:33:32 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_pfputstr(char *str)
{
	int	i;

	if (str)
	{
		i = ft_pfstrlen(str);
		write(1, str, i);
	}
	else
		i = (write(1, "(null)", 6));
	return (i);
}

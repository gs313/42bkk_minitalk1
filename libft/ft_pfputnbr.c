/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfputnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:33:17 by scharuka          #+#    #+#             */
/*   Updated: 2023/05/19 18:33:33 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_pfputnbr(int64_t n, int base, char *table, int *len)
{
	if (n < 0)
	{
		n = -n;
		*len += write(1, "-", 1);
	}
	if (n >= base)
		ft_pfputnbr(n / base, base, table, len);
	*len += write(1, &table[n % base], 1);
}

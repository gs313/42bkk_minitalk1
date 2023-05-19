/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfptr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:26:26 by scharuka          #+#    #+#             */
/*   Updated: 2023/05/19 18:33:00 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_pfptr(uintptr_t n, uintptr_t base, char *table, int *len)
{
	if (n >= base)
		ft_pfptr(n / base, base, table, len);
	*len += write(1, &table[n % base], 1);
}

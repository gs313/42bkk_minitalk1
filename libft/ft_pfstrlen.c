/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfstrlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 21:13:53 by scharuka          #+#    #+#             */
/*   Updated: 2023/05/19 18:33:31 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_pfstrlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' )
		len++;
	return (len);
}
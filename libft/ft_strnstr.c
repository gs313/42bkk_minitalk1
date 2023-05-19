/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scharuka <scharuka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:20:53 by scharuka          #+#    #+#             */
/*   Updated: 2022/08/20 10:45:40 by scharuka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	nlen = ft_strlen(needle);
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
			j++;
		else
		{
			i -= j;
			j = 0;
		}
		if (!needle[j])
			return ((char *)haystack + i - j + 1);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 21:41:15 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/09 18:32:06 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*srcpy;
	char	*destcpy;
	size_t	i;

	srcpy = (char *)src;
	destcpy = (char *)dest;
	i = 0;
	if (dest == src || n == 0)
		return (dest);
	while (i < n)
	{
		destcpy[i] = srcpy[i];
		i ++;
	}
	return (dest);
}

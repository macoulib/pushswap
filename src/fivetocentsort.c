/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivetocentsort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:09:50 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/16 17:53:03 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	radix(int *nb, int *nb2, int *size_a, int *size_b)
{
	int	bits;
	int	i;
	int	size_acpy;

	i = 0;
	nb = normaliz_tab(nb, *size_a);
	bits = max_bits(nb, *size_a);
	while (i < bits)
	{
		size_acpy = *size_a;
		while (size_acpy--)
		{
			if ((nb[0] >> i & 1) == 0)
				ft_pb(nb, nb2, size_a, size_b);
			else
				ft_ra(nb, *size_a);
		}
		while (*size_b > 0)
			ft_pa(nb, nb2, size_a, size_b);
		i++;
	}
}

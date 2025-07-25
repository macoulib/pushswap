/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fivetocentsort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:09:50 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/22 18:30:36 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	radix(int *nb, int *nb2, int *size_a, int *size_b)
{
	int	max_bit;
	int	i;
	int	size_acpy;

	size_acpy = *size_a;
	i = 0;
	nb = normaliz_tab(nb, *size_a);
	max_bit = max_bits(nb, *size_a);
	while (i < max_bit)
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
	free(nb);
}

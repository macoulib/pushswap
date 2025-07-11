/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   onetofivesort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 16:08:54 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/11 22:30:35 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	twothree_sort(int *nb, int ac)
{
	if (ac == 1)
	{
		if (nb[0] > nb[1])
			ft_sa(nb, ac);
	}
	if (ac == 2)
	{
		if (nb[1] > nb[2] && nb[2] > nb[0])
		{
			ft_rra(nb, ac);
			ft_sa(nb, ac);
		}
		else if (nb[0] > nb[1] && nb[0] < nb[2])
			ft_sa(nb, ac);
		else if (nb[1] > nb[0] && nb[0] > nb[2])
			ft_rra(nb, ac);
		else if (nb[0] > nb[1] && nb[1] < nb[2])
			ft_ra(nb, ac);
		else if (nb[0] > nb[1] && nb[1] > nb[2])
		{
			ft_sa(nb, ac);
			ft_rra(nb, ac);
		}
	}
}

void	four_sort(int *nb, int *nb2, int ac)
{
	if (ac  == 3)
	{
		ft_pb(nb, nb2,ac);
	}
}
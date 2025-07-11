/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrarrbrrr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:43:02 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/11 17:39:47 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_rra(int *nb, int ac)
{
	int	tmp;
	int	i;

	if (ac > 1)
	{
		tmp = nb[ac];
		i = ac;
		while (i > 0)
		{
			nb[i] = nb[i - 1];
			i--;
		}
		nb[0] = tmp;
	}
	ft_printf("rra\n");
}

void	ft_rrb(int *nb, int ac)
{
	int	tmp;
	int	i;

	if (ac - 1 > 1)
	{
		if (ac > 1)
	{
		tmp = nb[ac];
		i = ac;
		while (i > 0)
		{
			nb[i] = nb[i - 1];
			i--;
		}
		nb[0] = tmp;
	}
		
	ft_printf("rrb\n");
}
}

void	ft_rrr(int *nb, int *nb2, int ac)
{
	ft_rrb(nb, ac);
	ft_rra(nb2, ac);
	ft_printf("rrr\n");
}
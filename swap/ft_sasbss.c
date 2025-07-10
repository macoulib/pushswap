/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sasbss.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:40:20 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/10 16:31:48 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_sa(int *nb, int ac)
{
	int	tmp;

	if (ac > 1)
	{
		tmp = nb[0];
		nb[0] = nb[1];
		nb[1] = tmp;
	}
	ft_printf("sa\n");
}

void	ft_sb(int *nb, int ac)
{
	int	tmp;

	if (ac > 1)
	{
		tmp = nb[0];
		nb[0] = nb[1];
		nb[1] = tmp;
	}
	ft_printf("sb\n");
}

void	ft_ss(int *nb, int *nb2, int ac)
{
	if (ac > 1)
	{
		ft_sa(nb, ac);
		ft_sa(nb2, ac);
	}
	ft_printf("ss\n");
}
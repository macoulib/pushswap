/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_papb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:42:52 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/10 16:31:43 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_pa(int *nba, int *nbb, int ac)
{
	int	tmp;
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 0;
		tmp = nba[0];
		while (i < ac - 1)
		{
			nba[i] = nba[i + 1];
			i++;
		}
		nba[i] = '\0';
		i = 1;
		j = 0;
		while (i < ac)
		{
			nbb[i] = nbb[j];
			j++;
			i++;
		}
		nbb[0] = tmp;
		nbb[i] = '\0';
	}
	ft_printf("pa\n");
}

void	ft_pb(int *nba, int *nbb, int ac)
{
	int tmp;
	int i;
	int j;

	if (ac > 1)
	{
		i = 0;
		tmp = nba[0];
		while (i < ac - 1)
		{
			nba[i] = nba[i + 1];
			i++;
		}
		nba[i] = '\0';
		i = 1;
		j = 0;
		while (i < ac)
		{
			nbb[i] = nbb[j];
			j++;
			i++;
		}
		nbb[0] = tmp;
		nbb[i] = '\0';
	}
	ft_printf("pb\n");
}
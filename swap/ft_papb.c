/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_papb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:42:52 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/15 16:39:12 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_pa(int *a, int *b, int *size_a, int *size_b)
{
	int	i;

	i = *size_a;
	if (*size_a == 0)
		return ;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = b[0];
	(*size_a)++;
	i = 0;
	while (i < *size_a - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	(*size_b)--;
	ft_printf("pa\n");
}

void	ft_pb(int *a, int *b, int *size_a, int *size_b)
{
	int	i;

	i = *size_b;
	if (*size_a == 0)
		return ;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[0] = a[0];
	(*size_b)++;
	i = 0;
	while (i < *size_a - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	(*size_a)--;
	ft_printf("pb\n");
}

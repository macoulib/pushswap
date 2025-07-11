/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_papb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 20:42:52 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/11 23:41:28 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/push_swap.h"

void	ft_pb(int *a, int *b, int ac)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (b[i])
		i++;
	if (i)
	{
		while (j < i)
		{
			b[j + 1] = b[j];
			j++;
		}
		j = 0;
		while (j < ac - i)
		{
			printf("ac - i %d \n", ac - i );
			a[j] = a[j + 1];
			j++;
		}
		b[0] = a[0];
	}
	else
	{
		b[0] = a[0];
	}
	ft_printf("pb\n");
}

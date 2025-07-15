/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:01:21 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/14 20:45:14 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char *argv[])
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;

	size_a = ac - 1;
	size_b = 0;
	a = malloc(size_a * sizeof(int));
	if (!a)
		return (1);
	b = malloc(size_a * sizeof(int));
	if (!b)
		return (1);
	a = ft_conversion(a, argv, ac);
	if (size_a == 2 || size_a == 3)
		twothree_sort(a, size_a);
	if (size_a == 4 || size_a == 5)
		four_sort(a, b, &size_a, &size_b);
}

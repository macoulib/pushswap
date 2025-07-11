/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:01:21 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/11 23:32:38 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	int	*a;
	int	*b;

	a = malloc(4 * sizeof(int));
	if (!a)
		return (1);
	b = malloc(4 * sizeof(int));
	if (!b)
		return (1);
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	//	twothree_sort(a, 2);
	
	four_sort(a, b, 3);
	printf(" a Résultat : %d %d %d\n", a[0], a[1], a[2]);
	printf(" b Résultat : %d \n", b[0]);
	four_sort(a, b, 3);
	printf(" a Résultat : %d %d %d\n", a[0], a[1], a[2]);
	printf(" b Résultat : %d %d  \n", b[0] , b[1]);
	four_sort(a, b, 3);
	printf(" a Résultat : %d %d %d\n", a[0], a[1], a[2]);
	printf(" b Résultat : %d %d %d \n", b[0] , b[1],  b[2]);
	
}

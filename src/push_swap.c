/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:01:21 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/11 18:23:39 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(void)
{
	int *nb = malloc(3 * sizeof(int));
	if (!nb)
		return (1);
        
	nb[0] = 3;
	nb[1] = 2;
	nb[2] = 1;

	twothree_sort(nb, 2);
    printf("Résultat : %d %d %d\n", nb[0], nb[1], nb[2]);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:51:25 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/15 12:29:15 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

int	*ft_conversion(int *a, char **argv, int ac)
{
	char	**stockargv;
	char	*jointargv;
	int		i;

	i = 1;
	jointargv = ft_strdup(" ");
	while (i < ac)
	{
		jointargv = ft_strjoin(jointargv, argv[i]);
		jointargv = ft_strjoin(jointargv, " ");
		i++;
	}
	stockargv = ft_split(jointargv, ' ');
	free(jointargv);
	i = 0;
	while (stockargv[i])
	{
		a[i] = ft_atoi(stockargv[i]);
		i++;
	}
	free(stockargv);
	return (a);
}
int ra_themin(int *nb , int ac )
{
	int lownbr;
	int i;
	
	lownbr = nb[0];
	i = 0 ;
	while (i < ac)
	{
		if (lownbr > nb[i])
			lownbr = nb[i];
		i++;
	}
	return (lownbr)	;
}

void normaliz_tab(int *nb , int ac)
{
	ac = 0;
	nb = 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:01:21 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/21 22:17:24 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(int *a, int *b)
{
	free(a);
	free(b);
}
void	check_doublons(char **s, int ac)
{
	int	i;
	int	j;

	i = 0;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_atoi(s[i]) == ft_atoi(s[j]))
				ft_error("doublons detecte");
			j++;
		}
		i++;
	}
}

void	check_fakedigit(char *arv, char **argv)
{
	int	i;

	i = 0;
	while (arv[i])
	{
		if (!ft_isdigit(arv[i]))
		{
			write(1, "Error\n", 6);
			free(argv[i]);
			free(argv);
			break ;
		}
		i++;
	}
}
void	chartoint(int *nb, char **argv, int ac)
{
	int	i;

	i = 0;
	if (argv)
	{
		while (argv[i])
		{
			check_fakedigit(argv[i], argv);
			check_doublons(argv, ac);
			nb[i] = ft_atoi(argv[i]);
			i++;
		}
		free(argv);
	}
}

int	main(int ac, char *argv[])
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
	char	**argvchar;

	if (ac < 2)
		return (0);
	argvchar = ft_conversion(argv, &ac);
	size_a = ac;
	size_b = 0;
	a = malloc(size_a * sizeof(int));
	b = malloc(size_a * sizeof(int));
	if (!a || !b)
		return (1);
	chartoint(a, argvchar, size_a);
	if (size_a == 2 || size_a == 3)
		twothree_sort(a, size_a);
	else if (size_a == 4 || size_a == 5)
		four_sort(a, b, &size_a, &size_b);
	else if (size_a > 5)
		radix(a, b, &size_a, &size_b);
	ft_free(a, b);
}

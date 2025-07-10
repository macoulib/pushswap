/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macoulib <macoulib@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 16:01:24 by macoulib          #+#    #+#             */
/*   Updated: 2025/07/10 22:06:49 by macoulib         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>
# include <unistd.h>

void	twothree_sort(int *nb, int ac);
void	ft_pa(int *nba, int *nbb, int ac);
void	ft_pb(int *nba, int *nbb, int ac);
void	ft_ra(int *nb, int ac);
void	ft_rb(int *nb, int ac);
void	ft_rr(int *nb, int ac);
void	ft_rra(int *nb, int ac);
void	ft_rrb(int *nb, int ac);
void	ft_rrr(int *nb, int *nb2, int ac);
void	ft_sa(int *nb, int ac);
void	ft_sb(int *nb, int ac);
void	ft_ss(int *nb, int *nb2, int ac);
int		ft_printf(const char *x, ...);
int		ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_puthexamaj(const unsigned int n);
int		ft_puthexamin(const unsigned int n);
int		ft_putunbr(const unsigned int n);
int		ft_putpointer(void *pointer);
size_t	ft_strlen(const char *theString);
#endif
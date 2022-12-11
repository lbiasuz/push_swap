/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:07:35 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/10 13:46:23 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include "libft/ft_printf.h"

typedef struct s_dist
{
	int		content;
	struct	s_dist *next;
	struct	s_dist *prev;
} t_dlist;

int		main(int argc, char *argv[]);
void	push(t_list **a, t_list **b);
void	swap(t_list **a);
void	rotate(t_list **list);
void	reverse_rotate(t_list **list);
void	double_push(t_list **a, t_list **b);

#endif

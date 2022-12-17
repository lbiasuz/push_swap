/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:07:35 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/16 23:07:35 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include "libft/ft_printf.h"

typedef struct s_stkp
{
	int	integer;
	int	index;
	int	keep;
} t_stkp;

int		main(int argc, char *argv[]);
void	push(t_list **a, t_list **b);
void	swap(t_list **a);
void	rotate(t_list **list);
void	reverse_rotate(t_list **list);
void	double_push(t_list **a, t_list **b);

int ft_abs(int index);

void	loop_and_mark(t_list **a, t_list **b);
void	refill_stack(t_list **a, t_list **b);
int		checkpush(t_list **list);
int		keep_sum(t_list **list);
int		find_distance(t_list **list, int index);
void	align_stack(t_list **list, int index);
void	error(void);
void	index_stack(t_list **list);
int		find_index(t_list **list, int i);
void	mark_stack_index(t_list **list);
void	mark_stack_pivot(t_list **list, t_stkp *pivot);
int		checkinteger(char **argv);
int		checkdup(char **argv);
t_list	*build_stack(char **argv);

#endif

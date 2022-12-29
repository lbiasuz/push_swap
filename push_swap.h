/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:07:35 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/28 21:05:04 by lbiasuz          ###   ########.fr       */
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
}	t_stkp;

// Transfer to libft
int		ft_abs(int index);

int		main(int argc, char *argv[]);

// Actions
void	push(t_list **a, t_list **b);
void	swap(t_list **a);
void	rotate(t_list **list);
void	reverse_rotate(t_list **list);
void	double_push(t_list **a, t_list **b);

// Init validation
int		check_invalid_input(char **argv);
int		check_duplicate_input(char **argv);
t_list	*build_stack(char **argv);

void	loop_and_mark(t_list **a, t_list **b);
void	refill_stack(t_list **a, t_list **b);
int		checkpush(t_list **list);
int		keep_sum(t_list **list);
int		find_distance(t_list **list, int index);
void	align_stack(t_list **list, int index);
void	index_stack(t_list **list);
int		find_index(t_list **list, int i);
void	mark_stack_index(t_list **list);
void	mark_stack_pivot(t_list **list, t_stkp *pivot);
t_stkp	*stkp(t_list *list);
void	error(void);

#endif

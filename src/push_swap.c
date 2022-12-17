/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:53:55 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/17 14:20:28 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;

	if (!check_invalid_input(argv) || !check_duplicate_input(argv))
		error();
	a = build_stack(&argv[1]);
	index_stack(&a);
	mark_stack_index(&a);
	loop_and_mark(&a, &b);
	refill_stack(&a, &b);
	while (a)
	{
		ft_printf(
			"int: %d i: %d k: %d\n",
			((t_stkp *) a->content)->integer,
			((t_stkp *) a->content)->index,
			((t_stkp *) a->content)->keep
		);
		a = a->next;
	}
	ft_printf("argc: %d \n", argc);
}

void	loop_and_mark(t_list **a, t_list **b)
{
	int	keep;

	while (checkpush(a))
	{
		keep = keep_sum(a);
		swap(a);
		mark_stack_index(a);
		if (keep < keep_sum(a))
		{
			swap(a);
			mark_stack_index(a);
		}
		else if (!((t_stkp *) (*a)->content)->keep)
			push(a, b);
		else
			rotate(a);
	}
}

void	refill_stack(t_list **a, t_list **b)
{
	int		distance;
	
	while (*b)
	{
		distance = find_distance(a, ((t_stkp *) (*b))->integer);
		align_stack(a, distance);
		push(b, a);
	}
	align_stack(a, 0);
}

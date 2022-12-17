/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:53:55 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/16 23:11:09 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;

	if (!checkinteger(argv))
		error();
	if (!checkdup(argv))
		error();
	a = build_stack(argv);
	loop_and_mark(&a, &b);
	refill_stack(&a, &b);
	ft_printf("%d", argc);
}

void	loop_and_mark(t_list **a, t_list **b)
{
	int	keep;

	while (checkpush(a))
	{
		keep = keep_sum(a);
		swap(a);
		mark_stack_index(a);
		if (keep <= keep_sum(a))
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
	
	while (*b != NULL)
	{
		distance = find_distance(a, ((t_stkp *) (*b))->integer);
		align_stack(a, distance);
		push(b, a);
	}
	align_stack(a, 0);
}

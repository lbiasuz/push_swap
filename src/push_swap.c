/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:53:55 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/28 22:59:10 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	if (!check_invalid_input(argv) || !check_duplicate_input(argv))
		error();
	a = build_stack(&argv[1]);
	index_stack(&a);
	mark_stack_index(&a);
	loop_and_mark(&a, &b);
	refill_stack(&a, &b);
	return (argc > 0);
}

void	loop_and_mark(t_list **a, t_list **b)
{
	int	keep;

	while (checkpush(a))
	{
		keep = keep_sum(a);
		swap(a);
		ft_printf("SA\n");
		mark_stack_index(a);
		if (keep < keep_sum(a))
		{
			swap(a);
			ft_printf("SA\n");
			mark_stack_index(a);
		}
		else if (!(stkp(*a))->keep)
		{
			push(a, b);
			ft_printf("PA\n");
		}
		else
		{
			rotate(a);
			ft_printf("RA\n");
		}
	}
}

void	refill_stack(t_list **a, t_list **b)
{
	int		distance;
	t_list	*aux;

	aux = *b;
	while (aux)
	{
		distance = find_distance(a, stkp(aux)->integer);
		align_stack(a, distance);
		aux = aux->next;
		push(b, a);
		ft_printf("PB\n");
	}
	align_stack(a, 0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 06:49:11 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/19 09:27:50 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_size_3(t_list **a)
{
	if (stkp(*a)->index == ft_lstsize(*a) - 1)
	{
		rotate(a);
		ft_printf("ra\n");
	}
	if (stkp((*a)->next)->index == ft_lstsize(*a) - 1)
	{
		reverse_rotate(a);
		ft_printf("rra\n");
	}
	if (stkp((*a)->next)->index <= stkp(*a)->index)
	{
		swap(a);
		ft_printf("sa\n");
	}
}

void sort_size_3ish(t_list **a)
{
	if (stkp(*a)->index > stkp(ft_lstlast(*a))->index
		&& stkp(*a)->index > stkp((*a)->next)->index)
	{
		rotate(a);
		ft_printf("ra\n");
	}
	else if (stkp(*a)->index < stkp(ft_lstlast(*a))->index
		&& stkp(*a)->index < stkp((*a)->next)->index
		&& stkp(ft_lstlast(*a))->index < stkp((*a)->next)->index)
	{
		reverse_rotate(a);
		ft_printf("rra\n");
	}
	if (stkp(*a)->index < stkp(ft_lstlast(*a))->index
		&& stkp(*a)->index > stkp((*a)->next)->index
		)
	{
		swap(a);
		ft_printf("sa\n");
	}
}

void sort_size_5(t_list **a, t_list **b)
{
	int	lstsize;

	lstsize = ft_lstsize(*a);
	while (ft_lstsize(*a) > 3)
	{
		if (stkp(*a)->index == lstsize - 1 || stkp(*a)->index == 0)
		{
			push(a, b);
			ft_printf("pb\n");
		}
		else
		{
			rotate(a);
			ft_printf("ra\n");
		}
	}
	sort_size_3ish(a);
	while (ft_lstsize(*b) > 0)
	{
		if (
			stkp(*a)->index != stkp(*b)->index + 1 
			&& stkp(*b)->index < ft_lstsize(*a)
			)
		{
			rotate(a);
			ft_printf("ra\n");
		}
		else
		{
			push(b, a);
			ft_printf("pa\n");
		}
	}
	while (stkp(*a)->index != 0)
	{
		rotate(a);
		ft_printf("ra\n");
	}
}
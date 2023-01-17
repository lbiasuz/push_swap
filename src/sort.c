/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 06:49:11 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/17 07:48:27 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_size_3(t_list **a)
{
	if (stkp(*a)->index == ft_lstsize(*a) - 1)
	{
		reverse_rotate(a);
		ft_printf("ra\n");
	}
	if (stkp((*a)->next)->index == ft_lstsize(*a) - 1)
	{
		rotate(a);
		ft_printf("rra\n");
	}
	if (stkp((*a)->next)->index == stkp(*a)->index - 1)
	{
		swap(a);
		ft_printf("sa\n");
	}
}

void sort_size_5(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) > 3)
	{
		push(a, b);
		ft_printf("pa\n");
	}
	sort_size_3(a);
	if (ft_lstsize(*b) > 1)
		sort_size_3(b);
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
			ft_printf("pb\n");
		}
	}
	if (stkp(*a)->index < ft_lstsize(*a) / 2)
	{
		while (stkp(*a)->index != 0)
		{
			reverse_rotate(a);
			ft_printf("rra\n");
		}
	} 
	else
	{
		while (stkp(*a)->index != 0)
		{
			rotate(a);
			ft_printf("ra\n");
		}
	}
}
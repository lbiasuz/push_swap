/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 06:49:11 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/13 07:39:17 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void sort_size_3(t_list **a)
{
	if (stkp(*a)->index == ft_lstsize(*a) - 1)
		reverse_rotate(a);
	else if (stkp((*a)->next)->index == ft_lstsize(*a) - 1)
		rotate(a);
	if (stkp((*a)->next)->index < stkp(*a)->index)
		swap(a);
}

void sort_size_5(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) > 3)
		push(a, b);
	sort_size_3(a);
	if (ft_lstsize(*b) > 1)
		sort_size_3(b);
	while (ft_lstsize(*b) > 0)
	{
		if (
			stkp(*a)->index != stkp(*b)->index + 1 
			&& stkp(*b)->index < ft_lstsize(*a)
			)
			rotate(a);
		else
			push(b, a);
	}
	if (stkp(*a)->index < ft_lstsize(*a) / 2)
	{
		while (stkp(*a)->index != 0)
			reverse_rotate(a);
	} 
	else
	{
		while (stkp(*a)->index != 0)
			rotate(a);
	}
}
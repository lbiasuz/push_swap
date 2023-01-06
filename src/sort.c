/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 06:49:11 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/06 07:09:53 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_size_3(t_list **a)
{
	if (stkp(*a)->index == ft_lstsize(*a) - 1)
		reverse_rotate(a);
	else if (stkp((*a)->next)->index == ft_lstsize(*a) - 1)
		rotate(a);
	if (stkp((*a)->next)->index == stkp(*a)->index - 1)
		swap(a);
}

void	sort_size_4(t_list **a)
{
	while (!is_sorted(a, 4))
	{
		if (stkp((*a)->next)->index == stkp(*a)->index - 1)
			swap(a);
		rotate(a);
	}
}

void	sort_size_5(t_list **a, t_list **b)
{
	while	(!is_sorted(a, ft_lstsize(*a)))
	{
		if (stkp((*a)->next)->index == stkp(*a)->index - 1)
			swap(a);
		if (
			ft_abs(stkp((*a)->next)->index - stkp(*a)->index) > 1
			&& ft_abs(stkp(ft_lstlast(*a))->index - stkp(*a)->index) > 1
			)
			push(a, b);
		if (stkp(*b)->index == stkp(*a)->index - 1)
			push(b, a);
		rotate(a);
	}
	if (ft_lstsize(*b) > 0)
	{
		push(b, a);
		reverse_rotate(a);
	}
}
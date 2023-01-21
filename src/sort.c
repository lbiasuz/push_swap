/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 06:49:11 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/21 13:13:47 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_size_3(t_list **a)
{
	if (stkp(*a)->index == ft_lstsize(*a) - 1)
		rotate(a, 'a');
	if (stkp((*a)->next)->index == ft_lstsize(*a) - 1)
		reverse_rotate(a, 'a');
	if (stkp((*a)->next)->index <= stkp(*a)->index)
		swap(a, 'a');
}

void	sort_size_3ish(t_list **a)
{
	if (stkp(*a)->index == stkp((*a)->next)->index + 1
		|| stkp(*a)->index == stkp((*a)->next)->index - 2
	)
		swap(a, 'a');
	if (stkp(*a)->index == stkp((*a)->next)->index - 1)
		reverse_rotate(a, 'a');
	if (stkp(*a)->index == stkp((*a)->next)->index + 2)
		rotate(a, 'a');
}

void	sort_size_5(t_list **a, t_list **b)
{
	int	lstsize;

	lstsize = ft_lstsize(*a);
	while (ft_lstsize(*a) > 3)
	{
		if (stkp(*a)->index == lstsize - 1 || stkp(*a)->index == 0)
			push(a, b, 'b');
		else
			rotate(a, 'a');
	}
	sort_size_3ish(a);
	while (ft_lstsize(*b) > 0)
	{
		if (
			stkp(*a)->index != stkp(*b)->index + 1
			&& stkp(*b)->index < ft_lstsize(*a)
		)
			rotate(a, 'a');
		else
			push(b, a, 'a');
	}
	while (stkp(*a)->index != 0)
		rotate(a, 'a');
}

void	radix_sort(t_list **a, t_list **b)
{
	int	l;
	int	s;
	int	d;

	l = 0;
	d = digit_lenght(ft_lstsize(*a) - 1);
	while (l < d)
	{
		s = ft_lstsize(*a);
		while (s > 0)
		{
			if ((stkp(*a)->index >> l) & 1)
				rotate(a, 'a');
			else
				push(a, b, 'b');
			s--;
		}
		while (ft_lstsize(*b) > 0)
			push(b, a, 'a');
		l++;
	}
}

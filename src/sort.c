/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 06:49:11 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/20 23:09:01 by lbiasuz          ###   ########.fr       */
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
	if (stkp(*a)->index == stkp((*a)->next)->index + 1
		|| stkp(*a)->index == stkp((*a)->next)->index - 2
		)
	{
		swap(a);
		ft_printf("sa\n");
	}
	if (stkp(*a)->index == stkp((*a)->next)->index - 1)
	{
		reverse_rotate(a);
		ft_printf("rra\n");
	}
	if (stkp(*a)->index == stkp((*a)->next)->index + 2)
	{
		rotate(a);
		ft_printf("ra\n");
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

void radix_sort(t_list **a, t_list **b)
{
	int	l;
	int	s; 
	t_list	*aux;

	l = 0;
	while (l < digit_leght(s) - 1)
	{
		aux = *a;
		s = ft_lstsize(*a);
		while (s > 0)
		{
			if ((stkp(aux)->index >> l)&1)
			{
				ft_printf("ra\n");
				rotate(*a);
			}
			else
			{
				ft_printf("pb\n");
				push(a, b);
			}
			aux = aux->next;
			s--;
		}
		while (ft_lstsize(*b) > 0)
		{
			ft_printf("pa\n");
			push(b, a);
		}
		l++;
	}
}
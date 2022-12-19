/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:28:47 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/18 22:32:05 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	double_push(t_list **a, t_list **b)
{
	t_list	*temp;
	t_list	*tempa;
	t_list	*tempb;

	tempa = *a;
	tempb = *b;
	temp = tempb->next;
	tempb->next = tempa->next;
	tempa->next = temp;
	a = &tempb;
	b = &tempa;
}

void	push(t_list **src, t_list **dest)
{
	t_list	*temp;
	t_list	*hold;

	hold = (*src)->next;
	temp = *src;
	temp->next = *dest;
	*dest = temp;
	*src = hold;
}

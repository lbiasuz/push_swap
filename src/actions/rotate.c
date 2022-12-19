/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:19:52 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/18 22:32:21 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rotate(t_list **list)
{
	t_list	*start;
	t_list	*temp;
	t_list	*past;

	start = *list;
	temp = *list;
	past = *list;
	while (temp->next)
	{
		past = temp;
		temp = temp->next;
	}
	past->next = NULL;
	(*list) = temp;
	temp->next = start;
}

void	reverse_rotate(t_list **list)
{
	t_list	*start;
	t_list	*temp;
	t_list	*past;

	start = *list;
	temp = *list;
	past = *list;
	while (temp)
	{
		past = temp;
		temp = temp->next;
	}
	(*list) = (*list)->next;
	past->next = start;
	start->next = NULL;
}

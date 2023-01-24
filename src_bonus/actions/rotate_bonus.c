/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:19:52 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/24 07:45:39 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	reverse_rotate_bonus(t_list **list)
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

void	rotate_bonus(t_list **list)
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

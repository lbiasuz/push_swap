/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:19:52 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/21 13:08:14 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	reverse_rotate(t_list **list, char c)
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
	ft_printf("rr%c\n", c);
}

void	rotate(t_list **list, char c)
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
	ft_printf("r%c\n", c);
}

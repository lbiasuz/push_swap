/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mark.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:34:28 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/12 23:37:52 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	mark_stack_index(t_list **list)
{
	t_list	*aux;
	t_list	*aux2;

	aux = (*list)->next;
	aux2 = *list;
	while (aux)
	{
		if (((t_stkp *) aux2->content)->index < ((t_stkp *) aux->content)->index)
			((t_stkp *) aux->content)->should_move = 0;
		else
			((t_stkp *) aux->content)->should_move = 1;
		aux2 = aux;
		aux = aux->next;
	}
}

void	mark_stack_pivot(t_list **list, t_stkp *pivot)
{
	t_list *aux;

	aux = *list;
	while (aux)
	{
		if (((t_stkp *) aux->content)->integer < pivot->integer)
			((t_stkp *) aux->content)->should_move = 1;
		else
			((t_stkp *) aux->content)->should_move = 0;
		aux = aux->next;
	}
}
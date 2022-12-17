/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mark.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:34:28 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/17 12:38:46 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	mark_stack_index(t_list **list)
{
	t_list	*aux;
	t_list	*aux2;

	aux = (*list)->next;
	aux2 = *list;
	if (!aux)
		((t_stkp *) aux2->content)->index = 1;
	while (aux)
	{
		if (((t_stkp *) aux->content)->index == 0)
			((t_stkp *) aux->content)->keep = 1;
		if (((t_stkp *) aux2->content)->index < ((t_stkp *) aux->content)->index)
			((t_stkp *) aux->content)->keep = 1;
		else
			((t_stkp *) aux->content)->keep = 0;
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
		if (((t_stkp *) aux->content)->integer > pivot->integer)
			((t_stkp *) aux->content)->keep = 1;
		else
			((t_stkp *) aux->content)->keep = 0;
		aux = aux->next;
	}
}
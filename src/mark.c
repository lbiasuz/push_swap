/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mark.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:34:28 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/03 07:45:06 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	mark_stack_index(t_list **list)
{
	t_list	*aux;
	t_list	*aux2;

	aux = (*list)->next;
	aux2 = *list;
	if (!aux || stkp(aux2)->index < stkp(aux)->index)
		stkp(aux2)->keep = 1;
	else
		stkp(aux2)->keep = 0;
	while (aux)
	{
		if (stkp(aux2)->index < stkp(aux)->index)
			stkp(aux)->keep = 1;
		else
			stkp(aux)->keep = 0;
		aux2 = aux;
		aux = aux->next;
	}
}

void	mark_stack_pivot(t_list **list, t_stkp *pivot)
{
	t_list	*aux;

	aux = *list;
	while (aux)
	{
		if (stkp(aux)->integer > pivot->integer)
			stkp(aux)->keep = 1;
		else
			stkp(aux)->keep = 0;
		aux = aux->next;
	}
}

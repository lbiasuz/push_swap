/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 20:04:50 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/18 22:28:51 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	index_stack(t_list **list)
{
	t_list	*aux;
	t_stkp	*point;

	aux = *list;
	while (aux)
	{
		point = (t_stkp *) aux->content;
		point->index = find_index(list, point->integer);
		aux = aux->next;
	}
}

int	find_index(t_list **list, int i)
{
	t_list	*aux;
	int		cont;

	cont = 0;
	aux = *list;
	while (aux)
	{
		if (((t_stkp *) aux->content)->integer < i)
			cont++;
		aux = aux->next;
	}
	return (cont);
}

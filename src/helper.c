/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:20:43 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/13 22:34:09 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	checkpush(t_list **list)
{
	t_list	*aux;

	while (aux)
	{
		if (((t_stkp *) aux->content)->keep = 0)
			return (1);
		aux = aux->next;
	}
	return (0);
}

int	keep_sum(t_list **list)
{
	t_list	*aux;
	int cont;

	cont = 0;
	while (aux)
	{
		if (((t_stkp *) aux->content)->keep = 1)
			cont++;
		aux = aux->next;
	}
	return (cont);
}
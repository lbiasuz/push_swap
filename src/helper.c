/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:20:43 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/18 22:31:28 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	checkpush(t_list **list)
{
	t_list	*aux;

	aux = *list;
	while (aux)
	{
		if (((t_stkp *) aux->content)->keep == 0)
			return (1);
		aux = aux->next;
	}
	return (0);
}

int	keep_sum(t_list **list)
{
	t_list	*aux;
	int		cont;

	cont = 0;
	aux = *list;
	while (aux)
	{
		cont += ((t_stkp *) aux->content)->keep;
		aux = aux->next;
	}
	return (cont);
}

int	find_distance(t_list **list, int index)
{
	t_list	*aux;
	int		distance;

	aux = *list;
	while (aux)
	{
		if (ft_abs(((t_stkp *) aux->content)->index - index))
			distance = ((t_stkp *) aux->content)->index;
		aux = aux->next;
	}
	return (distance);
}

int	ft_abs(int index)
{
	if (index < 0)
		return (index * -1);
	return (index);
}

void	align_stack(t_list **list, int index)
{
	t_list	*aux;
	int		distance;

	aux = *list;
	distance = ((t_stkp *) aux->content)->index - index;
	while (distance-- < 0)
	{
		reverse_rotate(list);
		// ft_printf("RR\n");
	}
	while (distance++ > 0)
	{
		rotate(list);
		// ft_printf("R\n");
	}
}

void	error(void)
{
	ft_printf("Error\n");
	exit(1);
}

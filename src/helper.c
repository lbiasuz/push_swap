/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:20:43 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/28 22:56:20 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	checkpush(t_list **list)
{
	t_list	*aux;

	aux = *list;
	while (aux)
	{
		if (stkp(aux)->keep == 0)
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
		cont += (stkp(aux))->keep;
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
		if (ft_abs(stkp(aux)->index - index))
			distance = stkp(aux)->index;
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
	distance = stkp(aux)->index - index;
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

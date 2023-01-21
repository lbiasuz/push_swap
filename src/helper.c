/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:20:43 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/21 12:00:47 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

int	ft_abs(int index)
{
	if (index < 0)
		return (index * -1);
	return (index);
}

void	error(void)
{
	ft_printf("Error\n");
	exit(1);
}

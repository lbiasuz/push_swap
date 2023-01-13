/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:53:55 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/13 07:39:11 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	if (!check_invalid_input(argv) || !check_duplicate_input(argv))
		error();
	a = build_stack(&argv[1]);
	index_stack(&a);
	if (ft_lstsize(a) <= 3)
		sort_size_3(&a);
	else if (ft_lstsize(a) <= 5)
		sort_size_5(&a, &b);
	return (argc < 0);
}

int		is_sorted(t_list **a, int stop)
{
	int	i;
	t_list	*aux;

	i = 0;
	aux = *a;
	while (aux && i < stop)
	{
		if (stkp(aux)->index != i)
			return (0);
		i++;
		aux = aux->next;
	}
	return (1);
}
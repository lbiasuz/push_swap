/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:53:55 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/22 14:42:42 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;

	b = NULL;
	if (argc < 3)
		return (0);
	if (!check_invalid_input(argv) || !check_duplicate_input(argv))
		error();
	a = build_stack(&argv[1]);
	index_stack(&a);
	if (is_sorted(&a))
		return (0);
	else if (ft_lstsize(a) <= 2)
		sort_size_2(&a);
	else if (ft_lstsize(a) <= 3)
		sort_size_3(&a);
	else if (ft_lstsize(a) <= 5)
		sort_size_5(&a, &b);
	else
		radix_sort(&a, &b);
	ft_lstclear(&a, freestkp);
	ft_lstclear(&b, freestkp);
	return (0);
}

int	is_sorted(t_list **list)
{
	int		i;
	t_list	*aux;

	i = 0;
	aux = *list;
	while (aux->next)
	{
		if (stkp(aux)->index != i)
			return (0);
		i++;
		aux = aux->next;
	}
	return (1);
}
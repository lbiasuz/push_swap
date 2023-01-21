/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:53:55 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/21 16:51:30 by lbiasuz          ###   ########.fr       */
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
	if (ft_lstsize(a) <= 2)
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

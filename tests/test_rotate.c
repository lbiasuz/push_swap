/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:46:34 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/18 22:23:01 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(void)
{
	t_list	*a;

	a = ft_lstnew("1");
	ft_lstadd_front(&a, ft_lstnew("50"));
	ft_lstadd_front(&a, ft_lstnew("33"));
	ft_lstadd_front(&a, ft_lstnew("9"));
	rotate(&a);
	while (a)
	{
		ft_printf("%s ", a->content);
		a = a->next;
	}
}

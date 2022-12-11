/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:41:38 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/07 21:52:18 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(void)
{
	t_list	*a;

	a = ft_lstnew("1");
	ft_lstadd_front(&a, ft_lstnew("50"));
	ft_lstadd_front(&a, ft_lstnew("33"));
	ft_lstadd_front(&a, ft_lstnew("9"));

	swap(&a);
	while (a)
	{
		ft_printf("%s ", a->content);
		a = a->next;
	}
}
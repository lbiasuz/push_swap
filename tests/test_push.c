/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 22:45:53 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/07 21:45:58 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<assert.h>
#include	"../push_swap.h"

int	main(void)
{
	t_list	*a;
	t_list	*b;


	a = ft_lstnew("1");
	ft_lstadd_front(&a, ft_lstnew("50"));
	ft_lstadd_front(&a, ft_lstnew("33"));
	ft_lstadd_front(&a, ft_lstnew("9"));
	b = ft_lstnew("2");


	push(&a, &b);
	while (a)
	{
		ft_printf("%s ", a->content);
		a = a->next;
	}
	ft_printf("\n");
	while (b)
	{
		ft_printf("%s ", b->content);
		b = b->next;
	}
	// assert(*(b->content) == '1');
	// double_push(&a, &b);
	// assert(b->content == "50");
	// assert(a->content == "1");
}
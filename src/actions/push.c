/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:28:47 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/21 13:06:31 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push(t_list **src, t_list **dest, char c)
{
	t_list	*temp;
	t_list	*hold;

	hold = (*src)->next;
	temp = *src;
	temp->next = *dest;
	*dest = temp;
	*src = hold;
	ft_printf("p%c\n", c);
}

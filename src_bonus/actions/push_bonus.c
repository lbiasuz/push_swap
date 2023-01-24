/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:28:47 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/24 07:45:27 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_bonus(t_list **src, t_list **dest)
{
	t_list	*temp;
	t_list	*hold;

	hold = (*src)->next;
	temp = *src;
	temp->next = *dest;
	*dest = temp;
	*src = hold;
}

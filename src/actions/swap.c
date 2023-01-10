/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:40:07 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/06 21:49:21 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap(t_list **list)
{
	void	*content;

	content = (*list)->next->content;
	(*list)->next->content = (*list)->content;
	(*list)->content = content;
	ft_printf("SWAP\n");
}

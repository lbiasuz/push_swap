/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 20:58:30 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/21 16:29:38 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stkp	*stkp(t_list *list)
{
	if (!list)
		return (NULL);
	return ((t_stkp *)list->content);
}

void	freestkp(void *stkp)
{
	free(stkp);
}

int	digit_lenght(int i)
{
	int	r;

	r = 0;
	while (i >> r != 0)
		r++;
	return (r);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:20:43 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/24 07:37:07 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_abs(int index)
{
	if (index < 0)
		return (index * -1);
	return (index);
}

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

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

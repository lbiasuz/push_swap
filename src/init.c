/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:18:39 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/21 17:35:36 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_invalid_input(char **argv)
{
	int	s;
	int	i;

	s = 1;
	while (argv[s])
	{
		i = 0;
		while (argv[s][i] && (argv[s][i] == ' ' || argv[s][i] == '-'))
			i++;
		if (!argv[s][i] || !ft_isdigit(argv[s][i]))
			return (0);
		s++;
	}
	return (1);
}

int	check_duplicate_input(char **argv)
{
	int	s;
	int	i;

	s = 1;
	while (argv[s])
	{
		i = 1;
		while (argv[i])
		{
			if (i == s)
			{
				i++;
				continue ;
			}
			if (ft_atoi(argv[i]) == ft_atoi(argv[s]))
				return (0);
			i++;
		}
		s++;
	}
	return (1);
}

t_list	*build_stack(char **argv)
{
	int		s;
	t_list	*stk;
	t_stkp	*point;

	s = 0;
	stk = NULL;
	while (argv[s])
	{
		point = (t_stkp *) malloc(sizeof(t_stkp));
		point->integer = ft_atoi(argv[s]);
		ft_lstadd_back(&stk, ft_lstnew((void *) point));
		s++;
	}
	return (stk);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:18:39 by lbiasuz           #+#    #+#             */
/*   Updated: 2022/12/10 22:10:20 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	checkinteger(char **argv)
{
	int	s;
	int	i;

	s = 0;
	while (argv[s])
	{
		i = 0;
		while (argv[s][i] && (ft_strchr(argv[s][i], ' ') || ft_strchr(argv[s][i], '-')))
			i++;
		if (!argv[s][i] || !ft_isdigit(argv[s][i]))
			return (0);
		s++;
	}
	return (1);
}

int	checkdup(char **argv)
{
	int	s;
	int	i;

	s = 0;
	while (argv[s])
	{
		i = 0;
		while (argv[i])
		{
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
	int		*integer;

	s = 0;
	integer = (int *) malloc(sizeof(int));
	*integer = ft_atoi(argv[s]);
	stk = ft_lstnew((void *) integer);
	s++;
	while (argv[s])
	{
		integer = (int *) malloc(sizeof(int));
		*integer = ft_atoi(argv[s]);
		ft_lstadd_back(&stk, ft_lstnew((void *) integer));
		s++;
	}
	return (stk);
}
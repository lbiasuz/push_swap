/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 19:18:39 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/22 13:30:13 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	ft_isspace(char c)
{
	if (c == '\f' || c == '\n'
		|| c == '\r' || c == '\t'
		|| c == '\v' || c == ' ')
		return (1);
	return (0);
}

long	ft_atol(const char *nptr)
{
	long	i;
	long	n;

	i = 0;
	n = 1;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-')
		n = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (ft_isdigit(*nptr))
	{
		i = (i * 10) + (*nptr - 48);
		nptr++;
	}
	return (i * n);
}

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
		if (ft_atol(argv[s]) > 2147483647 || ft_atol(argv[s]) < -2147483648)
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

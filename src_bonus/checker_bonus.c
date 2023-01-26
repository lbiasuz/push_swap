/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 07:06:40 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/26 11:14:16 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/get_next_line.h"

int	is_sorted(t_list **list)
{
	int		i;
	t_list	*aux;

	i = 0;
	aux = *list;
	while (aux->next)
	{
		if (stkp(aux)->index != i)
			return (0);
		i++;
		aux = aux->next;
	}
	return (1);
}

void	perform(char *action, t_list **a, t_list **b)
{
	while (action != NULL && action[0] != '\0')
	{
		if (ft_strncmp(action, "sa", 2) == 0)
			swap_bonus(a);
		else if (ft_strncmp(action, "pb", 2) == 0)
			push_bonus(a, b);
		else if (ft_strncmp(action, "pa", 2) == 0)
			push_bonus(b, a);
		else if (ft_strncmp(action, "ra", 2) == 0)
			rotate_bonus(a);
		else if (ft_strncmp(action, "rra", 3) == 0)
			reverse_rotate_bonus(a);
		else
		{
			ft_lstclear(a, freestkp);
			ft_lstclear(b, freestkp);
			error();
		}
		free(action);
		action = get_next_line(0);
	}
}

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;
	char	*action;

	b = NULL;
	if (!check_invalid_input(argv) || !check_duplicate_input(argv))
		error();
	if (argc < 3)
		error();
	action = get_next_line(0);
	if (!action)
		error();
	a = build_stack(&argv[1]);
	index_stack(&a);
	perform(action, &a, &b);
	if (is_sorted(&a) && b == NULL)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_lstclear(&a, freestkp);
	ft_lstclear(&b, freestkp);
	return (0);
}

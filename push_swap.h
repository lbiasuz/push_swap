/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbiasuz <lbiasuz@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 09:07:35 by lbiasuz           #+#    #+#             */
/*   Updated: 2023/01/23 09:20:44 by lbiasuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include "libft/ft_printf.h"

typedef struct s_stkp
{
	int	integer;
	int	index;
}	t_stkp;

// Transfer to libft
int		ft_abs(int index);

int		main(int argc, char *argv[]);

// Actions
void	push(t_list **a, t_list **b, char c);
void	swap(t_list **a, char c);
void	rotate(t_list **list, char c);
void	reverse_rotate(t_list **list, char c);

// Init validation
int		check_invalid_input(char **argv);
int		check_duplicate_input(char **argv);
t_list	*build_stack(char **argv);
int		is_sorted(t_list **list);

void	index_stack(t_list **list);
int		find_index(t_list **list, int i);
t_stkp	*stkp(t_list *list);
void	freestkp(void *stkp);
int		digit_lenght(int i);
void	error(void);

void	sort_size_2(t_list **a);
void	sort_size_3(t_list **a);
void	sort_size_5(t_list **a, t_list **b);
void	radix_sort(t_list **a, t_list **b);

#endif

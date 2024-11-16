/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:37:21 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/16 19:21:54 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"

// /* Operations */
// void	swap(t_stack **stack);
// void	push(t_stack **from, t_stack **to);
// void	rotate(t_stack **stack);
// void	reverse_rotate(t_stack **stack);

/* Tools */
void	ft_free(char **str);
int	total_size(char **arr);

/* Utils */
int	*two_argument(char **argv);
int	*many_arguments(char **argv);

/* Stack */
typedef struct s_stack
{
	int			*value;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

#endif //PUSH_SWAP_H

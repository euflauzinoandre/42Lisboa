/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:37:21 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/18 14:49:55 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/include/libft.h"

// /* Operations */
// void	swap(t_list **stack);
// void	push(t_list **from, t_list **to);
// void	rotate(t_list **stack);
// void	reverse_rotate(t_list **stack);

/* Tools */
void	ft_free(char **str);
int	count_numbers(int *numbers);

/* Utils */

/* Init Stack */
void	init_stack(t_list **stack, int argc, char **argv);
void	print_stack(char *str, t_list *stack_a);
// void	sort_list(t_list **stack_a, t_list **stack_b);

#endif //PUSH_SWAP_H

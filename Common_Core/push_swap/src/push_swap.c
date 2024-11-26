/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:37:15 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/26 13:52:44 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc < 2)
		return (-1);
	stack_a = NULL;
	stack_b = NULL;
	init_stack(&stack_a, argc, argv);
	radix_sort(&stack_a, &stack_b);
	ft_printf("STACK_A SORTED: ");
	print_stack(&stack_a);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}

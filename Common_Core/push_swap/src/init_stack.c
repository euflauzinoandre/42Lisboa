/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 11:21:57 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/18 14:30:45 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_stack(t_list **stack, int argc, char **argv)
{
	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	if (argc == 2)
		ft_free(args);
}

void	print_stack(char *str, t_list *stack)
{
	if (stack == NULL)
	{
		ft_printf("\nVazio!\n");
		return ;
	}
	ft_printf("%s:\n", str);
	while (stack)
	{
		ft_printf("%d\n", stack->content);
		stack = stack->next;
	}
}

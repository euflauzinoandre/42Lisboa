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
		args = argv + 1;
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

void	print_stack(t_list **stack)
{
	t_list	*head;

	head = *stack;
	if (head == NULL)
	{
		ft_printf("\nEmpty!\n");
		return ;
	}
	while (head->next)
	{
		ft_printf("%d ", head->content);
		head = head->next;
	}
	ft_printf("\n");
}

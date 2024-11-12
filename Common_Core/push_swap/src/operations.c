/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   toy: aeuflauz <aeuflauz@student.42listooa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 15:52:26 toy aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/11 18:13:17 toy aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	
	if (!stack || !(*stack)->next)
		return ;
	first = *stack;
	second = first->next;
	first->next = second->next;
	if (second->next != NULL)
		second->next->prev = first;
	second->prev = first->prev;
	if (first->prev != NULL)
		first->prev->next = second;
	second->next = first;
	first->prev = second;
	*stack = second;
}

void	push(t_stack **from, t_stack **to)
{
	t_stack	*aux;

	if (!*from)
		return ;
	aux = *from;
	*from = aux->next;
	if (*from)
		(*from)->prev = NULL;
	aux->next = *to;
	if (*to)
		(*to)->prev = aux;
	*to = aux;
}

void	rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = *stack;
	while (last->next)
		last = last-> next;
	*stack = first->next;
	first->next = NULL;
	first->prev = last;
	last->next = first;
}

void	reverse_rotate(t_stack **stack)
{
	t_stack	*first;
	t_stack	*last;

	if (!*stack || !(*stack)->next)
		return ;
	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	if (last->prev)
		last->prev->next = NULL;
	last->prev = NULL;
	last->next = first;
	first->prev = last;
	*stack = last;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:44:19 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/26 16:04:55 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int     get_max(t_list **stack)
{
	t_list	*tmp;
	int		max;

	tmp = *stack;
	max = tmp->content;
	while (tmp != NULL)
	{
		if (tmp->content > max)
			max = tmp->content;
		tmp = tmp->next;
	}
	return (max);
}

void	callback(t_list **stack_a, t_list **stack_b)
{
	while (*stack_b != NULL)
	{
		pa(stack_a, stack_b);
	}
}

int	byPosition(int num, int digits, int position)
{
	int	digit_position[digits];
	int	i;
	
	i = digits;
	while (i > 0)
	{
		digit_position[i - 1] = num % 10;
		num /= 10;
		i--;
	}
	return (digit_position[position]);
}	

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*head;
	int	digits;
	int	i;
	int	j;
	
	digits = count_digits(get_max(stack_a));
	i = 0;
	while (i < digits)
	{
		j = 0;
		while (j <= 9)
		{
			head = *stack_a;
			while (head != NULL)
			{
				if (byPosition(head->content, digits, (digits - i - 1)) == j)
					pb(stack_a, stack_b);
				head = head->next;
			}
			j++;
		}
		callback(stack_a, stack_b);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:37:15 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/16 19:24:14 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	int	*numbers;
	int	*temp;

	if (argc < 2)
		return (0);
	if (argc == 2)
		numbers = two_argument(argv);
	else
		numbers = many_arguments(argv);
	// ft_printf("ARGC = %d\n", argc);
	// temp = numbers;
	// while (*temp)
	// 	ft_printf("%d\n", *temp++);
	free(numbers);
	return (0);
}

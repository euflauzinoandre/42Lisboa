/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:37:15 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/12 14:26:20 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int argc, char **argv)
{
	int	*numbers;

	if (argc < 2)
		return (0);
	numbers = create_list(argc, argv);
	ft_printf("ARGC = %d\n", argc);
	while (*numbers)
		ft_printf("%d\n", *numbers++);
	free(numbers);
	return (0);
}

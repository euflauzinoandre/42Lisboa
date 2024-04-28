/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 13:40:58 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/20 16:33:03 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(sizeof(int) * (max - min));
	if (!arr)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (min < max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	*range = arr;
	return (i);
}

/*
int	main(void)
{
	int	**range_2;
	int	min = 10;
	int	max = 14;
	int	*range_1;
	int	result;
	range_2 = &range_1;
	printf("%i\n", (result = ft_ultimate_range(range_2, min, max)));
	free(*range_2);
	min = 10;
	max = 9;
	printf("%i\n", (result = ft_ultimate_range(range_2, min, max)));
	free(*range_2);
}
*/

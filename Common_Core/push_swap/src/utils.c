/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:20:19 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/16 19:20:22 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	*two_argument(char **argv)
{
	char	**arguments;
	int	*numbers;
	int		i;

	arguments = ft_split(argv[1], ' ');
	if (!arguments)
		return (NULL);
	numbers = malloc(total_size(arguments) * sizeof(int));
	if (!numbers)
		return (NULL);
	i = 0;
	while (arguments[i] != NULL)
	{
		numbers[i] = ft_atoi(arguments[i]);
		i++;
	}
	ft_free(arguments);
	return (numbers);
}

int	*many_arguments(char **argv)
{
	int	*numbers;
	int	count;
	int	i;
	int	j;

	i = 1;
	count = 0;
	while (argv[i] != NULL)
		count += ft_strlen(argv[i++]);
	numbers = malloc(count * sizeof(int));
	if (!numbers)
		return (NULL);
	i = 1;
	while (argv[i] != NULL)
	{
		numbers[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
	return (numbers);
}
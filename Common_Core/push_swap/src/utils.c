/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 20:20:19 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/12 14:34:19 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ft_free(char **str)
{
	int	i;
	
	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	*create_list(int argc, char **argv)
{
	char	**parameters;
	int	*numbers;
	int		i;
	int		j;
	int		total_params;

	i = 0;
	j = 1;
	total_params = 0;
	if (argc == 2)
	{
		parameters = ft_split(argv[1], ' ');
		if (!parameters)
			return (NULL);
	}
	if (argc > 2)
	{
		parameters = malloc(sizeof(char *) * (argc - 1));
		if (!parameters)
			return(NULL);
		while (j < argc)
			parameters[total_params++] = argv[j++];
		parameters[total_params] = NULL;
	}
	while (parameters[total_params] != NULL)
		total_params++;	
	numbers = malloc((total_params) * sizeof(int));
	if (!numbers)
		return(NULL);
	i = 0;
	while (parameters[i] != NULL)
	{
		numbers[i] = ft_atoi(parameters[i]);
		i++;
	}
	if (argc == 2)
		ft_free(parameters);
	return(numbers);
}

// void	ft_check_args(int argc, char **argv)
// {
	
// }

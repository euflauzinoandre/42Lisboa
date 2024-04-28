/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:36:56 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/13 21:44:07 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	i;
	int	signal;

	signal = 1;
	num = 0;
	i = 0;
	while (str[i] <= 32 || str[i] == 127)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - '0');
		i++;
		if (str[i] < '0' || str[i] > '9')
			return (num * signal);
	}
	return (0);
}

/*
int	main(void)
{
	char	string[] =  " 	--+1234ab567";
	char	*str;

	str = string;
	printf("%d", ft_atoi(str));
	return (0);
}
*/

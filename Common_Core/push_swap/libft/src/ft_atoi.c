/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 03:42:24 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/05 14:21:38 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	signal;

	if (!str)
		return (0);
	i = 0;
	num = 0;
	signal = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * signal);
}

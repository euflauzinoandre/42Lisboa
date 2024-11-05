/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 00:37:42 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/05 11:37:57 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	count_numbers(long n)
{
	long	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	reverse(char *str, long size)
{
	long	aux;
	long	half;
	long	i;

	i = 0;
	half = size / 2;
	while (i < half)
	{
		aux = str[size - i - 1];
		str[size - i - 1] = str[i];
		str[i] = aux;
		i++;
	}
	str[size] = '\0';
}

char	*ft_itoa(long n)
{
	char	*str;
	long	i;
	long	size;
	long	num;

	num = n;
	size = count_numbers(num);
	if (num < 0)
	{
		size += 1;
		num = -num;
	}
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	if (n < 0)
		str[size - 1] = '-';
	reverse(str, size);
	return (str);
}

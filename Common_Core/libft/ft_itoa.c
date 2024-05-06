/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 00:37:42 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/01 14:02:59 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(long n)
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

char	*ft_itoa(int n)
{
	char	*str;
	long	i;
	long	size;
	long	negative;
	long	num;

	num = n;
	size = count(num);
	negative = 0;
	if (num < 0)
	{
		negative = 1;
		num = -num;
	}
	str = (char *)malloc(sizeof(char) * (size + negative + 1));
	i = 0;
	while (i < size)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}
	if (negative)
		str[i++] = '-';
	reverse(str, (size + negative));
	return (str);
}

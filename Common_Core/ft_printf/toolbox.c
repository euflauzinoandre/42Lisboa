/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toolbox.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 10:52:07 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/28 16:00:21 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count_numbers(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

int	decimal_to_hexadecimal(unsigned long n, char entry, int fd)
{
	char	array[count_numbers(n)];
	int		i;
	int		count;
	
	i = 0;
	count = 0;
	if (n == 0)
		return (ft_putchar_fd('0', fd));
	while (n > 0)
	{
		if (entry == 'x')
			array[i++] = "0123456789abcdef"[n % 16];
		if (entry == 'X')
			array[i++] = "0123456789ABCDEF"[n % 16];
		count++;
		n /= 16;
	}
	while (i > 0)
		ft_putchar_fd(array[--i], fd);
	return (count);
}

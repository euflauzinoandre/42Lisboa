/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 01:28:19 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/21 03:40:08 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	count_numbers(long n)
{
	long	i;

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

int	print_d(int n, int fd)
{
	ft_putnbr_fd(n, fd);
	return (count_numbers((long)n));
}

int	print_u(unsigned int n, int fd)
{
	ft_putnbr_fd((unsigned int)n, fd);
	return (count_numbers((unsigned int)n));
}

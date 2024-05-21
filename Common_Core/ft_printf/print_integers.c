/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 01:28:19 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/21 16:30:43 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	counter(long n)
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
	return (counter((long)n));
}

int	print_u(long n, int fd)
{
	ft_putnbr_fd(n, fd);
	return (counter(n));
}

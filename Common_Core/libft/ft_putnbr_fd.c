/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:25:24 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/01 14:04:42 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	to_char(long n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		to_char((n / 10), fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;

	num = n;
	to_char(num, fd);
}

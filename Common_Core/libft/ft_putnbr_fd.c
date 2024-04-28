/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:25:24 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/04/26 21:39:35 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	to_char(int n, int fd)
{
	if (n >= 10)
		to_char((n / 10), fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}

int	negative(int n, int fd)
{
	n *= -1;
	write(fd, "-", 1);
	return (n);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
		n = negative(n, fd);
	to_char(n, fd);
}

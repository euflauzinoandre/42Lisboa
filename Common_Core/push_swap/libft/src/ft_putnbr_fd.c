/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 21:25:24 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/10/15 14:26:41 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

static int	to_char(long n, int *count, int fd)
{
	if (n < 0)
	{
		*count += ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		to_char((n / 10), count, fd);
	*count += ft_putchar_fd((n % 10 + '0'), fd);
	return (*count);
}

int	ft_putnbr_fd(long n, int fd)
{
	int	count;

	count = 0;
	count = to_char(n, &count, fd);
	return (count);
}

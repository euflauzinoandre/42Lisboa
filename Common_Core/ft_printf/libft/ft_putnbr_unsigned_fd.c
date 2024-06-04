/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:59:14 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/06/03 18:37:32 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_char(unsigned int n, int *count, int fd)
{
	if (n >= 10)
		to_char((n / 10), count, fd);
	*count += ft_putchar_fd((n % 10 + '0'), fd);
	return (*count);
}

int	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	int	count;

	count = 0;
	count = to_char(n, &count, fd);
	return (count);
}

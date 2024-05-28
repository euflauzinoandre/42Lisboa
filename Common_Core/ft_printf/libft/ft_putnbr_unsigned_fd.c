/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 02:42:45 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/27 02:58:52 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	to_char(unsigned long n, int fd)
{
	if (n >= 10)
		to_char((n / 10), fd);
	ft_putchar_fd((n % 10 + '0'), fd);
}

void	ft_putnbr_unsigned_fd(unsigned long n, int fd)
{
	to_char(n, fd);
}

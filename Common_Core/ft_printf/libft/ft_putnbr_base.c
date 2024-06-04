/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 19:09:16 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/06/03 20:32:12 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base(unsigned long n, char entry, int fd)
{
	char	array[16];
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
		n /= 16;
	}
	while (i > 0)
		count += ft_putchar_fd(array[--i], fd);
	return (count);
}

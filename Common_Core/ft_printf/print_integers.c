/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 01:28:19 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/06/04 10:07:13 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p(void *ptr, int fd)
{
	unsigned long	address;

	if (ptr == NULL)
		return (ft_putstr_fd("(nil)", fd));
	address = (unsigned long)ptr;
	return (ft_putchar_fd('0', fd)
		+ ft_putchar_fd('x', fd)
		+ print_x(address, fd));
}

int	print_di(int n, int fd)
{
	return (ft_putnbr_fd((long)n, fd));
}

int	print_u(unsigned int n, int fd)
{
	return (ft_putnbr_unsigned_fd(n, fd));
}

int	print_x(unsigned long n, int fd)
{
	return (ft_putnbr_base(n, 'x', fd));
}

int	print_upperx(unsigned long n, int fd)
{
	return (ft_putnbr_base(n, 'X', fd));
}

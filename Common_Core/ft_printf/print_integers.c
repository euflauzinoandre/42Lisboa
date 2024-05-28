/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 01:28:19 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/28 16:00:49 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_d(int n, int fd)
{
	ft_putnbr_fd((long)n, fd);
	return (count_numbers((long)n));
}

int	print_i(int n, int fd)
{
	ft_putnbr_fd((long)n, fd);
	return (count_numbers((long)n));
}

int	print_u(unsigned long n, int fd)
{
	ft_putnbr_unsigned_fd(n, fd);
	return (count_numbers((long)n));
}

int	print_x(unsigned long n, int fd)
{
	return(decimal_to_hexadecimal(n, 'x', fd));
}

int	print_upperx(unsigned long n, int fd)
{
	return (decimal_to_hexadecimal(n, 'X', fd));
}

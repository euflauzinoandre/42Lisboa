/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:06:06 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/05 11:48:19 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	output_data(const char *str, int num_args, va_list args, int fd)
{
	if (*str == 'c')
		num_args += ft_putchar_fd(va_arg(args, int), fd);
	if (*str == 's')
		num_args += ft_putstr_fd(va_arg(args, char *), fd);
	if (*str == 'p')
		num_args += print_p(va_arg(args, void *), fd);
	if (*str == 'd' || *str == 'i')
		num_args += print_di(va_arg(args, int), fd);
	if (*str == 'u')
		num_args += print_u(va_arg(args, unsigned int), fd);
	if (*str == 'x')
		num_args += print_x(va_arg(args, unsigned int), fd);
	if (*str == 'X')
		num_args += print_upperx(va_arg(args, unsigned int), fd);
	if (*str == '%')
		num_args += ft_putchar_fd('%', fd);
	return (num_args);
}

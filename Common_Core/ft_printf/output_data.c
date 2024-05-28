/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:06:06 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/28 16:33:28 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	output_data(const char *params, int i, int num_args, va_list args)
{
	int	fd;

	fd = 1;
	if (params[i] == 'c')
		num_args += ft_putchar_fd(va_arg(args, int), fd);
	if (params[i] == 's')
		num_args += ft_putstr_fd(va_arg(args, char *), fd);
	if (params[i] == 'd')
		num_args += print_d(va_arg(args, int), fd);
	if (params[i] == 'i')
		num_args += print_i(va_arg(args, int), fd);
	if (params[i] == 'u')
		num_args += print_u(va_arg(args, unsigned long), fd);
	if (params[i] == 'x')
		num_args += print_x(va_arg(args, unsigned long), fd);
	if (params[i] == 'X')
		num_args += print_upperx(va_arg(args, unsigned long), fd);
	return (num_args);
}

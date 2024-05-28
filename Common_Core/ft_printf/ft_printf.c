/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 21:03:04 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/28 16:01:10 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *params, ...)
{
	va_list	args;
	int		i;
	int		num_args;

	i = 0;
	num_args = 0;
	va_start(args, params);
	while (params[i] != '\0')
	{
		if (params[i] == '%' && params[i + 1] == '%')
		{
			num_args += ft_putchar_fd('%', 1);
			i++;
		}
		else if (params[i] == '%' && params[i - 1] != '%' && params[i++])
			num_args = output_data(params, i, num_args, args);
		else if (params[i] != '%')
			num_args += ft_putchar_fd(params[i], 1);
		i++;
	}
	va_end(args);
	return (num_args);
}

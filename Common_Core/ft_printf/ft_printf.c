/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 21:03:04 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/06/04 10:26:43 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	const char	*data;
	int			num_args;
	int			fd;

	fd = 1;
	num_args = 0;
	data = "cspdiuxX%";
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (ft_strchr(data, *str))
				num_args = output_data(str, num_args, args, fd);
		}
		else
			num_args += ft_putchar_fd(*str, fd);
		str++;
	}
	va_end(args);
	return (num_args);
}

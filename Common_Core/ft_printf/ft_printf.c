/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 21:03:04 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/12 21:03:46 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	converter(const char *params, int num_args, va_list args)
{
	int	i;

	i = 0;
	while (params[i] != '\0')
	{
		while (i < num_args && params[i] != '%')
			ft_putchar_fd(params[i++], 1);
		if (params[i++] == '%')
		{
			if (params[i] == 'c')
				num_args += ft_putchar_fd(va_arg(args, int), 1);
			if (params[i] == 's')
			{
				num_args += ft_putstr_fd(va_arg(args, char *), 1);
				i = num_args;
			}
		}
		i++;
	}
	return (num_args);
}

int	ft_printf(const char *params, ...)
{
	va_list	args;
	int		num_args;
	int		result;

	result = 0;
	va_start(args, params);
	num_args = ft_strlen(params);
	if (!ft_strchr((char *)params, '%'))
		ft_putendl_fd((char *)params, 1);
	else
		result += converter(params, num_args, args);
	va_end(args);
	return (num_args + result);
}
/*
int	main(void)
{
	ft_printf("Hello, %s\n", "andre");
	printf("\nHello, %s", "andre");
	return (0);
}
*/

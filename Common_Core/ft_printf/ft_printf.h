/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:49:05 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/28 16:00:11 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <limits.h>
# include "libft/libft.h"

int	ft_printf(const char *arguments, ...);
int	output_data(const char *params, int i, int num_args, va_list args);
int	count_numbers(long n);
int	decimal_to_hexadecimal(unsigned long n, char entry, int fd);
int	print_d(int n, int fd);
int	print_i(int n, int fd);
int	print_u(unsigned long n, int fd);
int	print_x(unsigned long n, int fd);
int	print_upperx(unsigned long n, int fd);

#endif // FT_PRINTF_H

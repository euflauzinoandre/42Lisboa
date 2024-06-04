/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:49:05 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/06/04 10:07:06 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *arguments, ...);
int	output_data(const char *str, int num_args, va_list args, int fd);
int	print_p(void *prt, int fd);
int	print_di(int n, int fd);
int	print_u(unsigned int n, int fd);
int	print_x(unsigned long n, int fd);
int	print_upperx(unsigned long n, int fd);

#endif // FT_PRINTF_H

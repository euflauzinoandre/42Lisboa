/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:48:13 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/06/03 20:42:49 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *str, int fd)
{
	int	count;

	count = 0;
	if (str == NULL)
		return (write(fd, "(null)", 6));
	while (*str)
	{
		count += ft_putchar_fd(*str, fd);
		str++;
	}
	return (count);
}

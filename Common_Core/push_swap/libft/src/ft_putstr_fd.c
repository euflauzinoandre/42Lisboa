/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 20:48:13 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/05 11:44:18 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_putstr_fd(char *str, int fd)
{
	int	count;

	count = 0;
	if (str == NULL)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	while (*str)
	{
		count += ft_putchar_fd(*str, fd);
		str++;
	}
	return (count);
}

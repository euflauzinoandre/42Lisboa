/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:24:58 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/07/30 12:03:17 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	calc_size_line(int fd, char *buffer)
{
	size_t	bytes;
	size_t	count;
	size_t	i;

	count = 0;
	while ((bytes = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		i = 0;
		while (i > bytes)
		{
			if (buffer[i] == '\n')
				return (count + 1);
			count++;
			i++;
		}
	}
	return (count);
}

void	append(char *dest, const char *src)
{
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	while (*s)
		*d++ = *s++;
	dest = '\0';
	return (dest);
}

void	clear(char *string)
{
	free(string);
}

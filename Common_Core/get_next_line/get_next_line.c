/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 17:32:04 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/07/16 22:35:58 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*create_line(int fd, char *buffer)
{
	static char	*string;
	size_t		bytes;
	size_t		i;
	size_t		size_line;

	size_line = calc_size_line(fd, buffer);
	string = malloc(size_line + 1);
	if (!string)
		return (NULL);
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, buffer, BUFFER_SIZE) < 0)
		return (NULL);
	while ((bytes = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes] = '\0';
		i = 0;
		while (i < bytes)
		{
			if (buffer[i] == '\n')
				append(string, buffer);
		}
		append(string, buffer);
	}
	return (string);
}

char	*get_next_line(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*get_line;

	get_line = create_line(fd, buffer);
	clear(string);
	return (get_line);
}

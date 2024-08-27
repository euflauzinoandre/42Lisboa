/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:26:01 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/08/27 17:02:07 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*next;
	char		*buffer;
	char		*line;
	char		*temp;
	int		bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!find_newline(next))
	{
		buffer = malloc (sizeof(char) * (BUFFER_SIZE + 1));
		if (!buffer)
			return (NULL);
		while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
		{
			buffer[bytes_read] = '\0';
			temp = ft_strjoin(next, buffer);
			free(next);
			next = temp;
			if (find_newline(next))
				break ;
		}
	free(buffer);
	}
	if (!next)
		return (NULL);
	line = ft_get_line(next);
	next = ft_get_rest(next);
	return (line);
}

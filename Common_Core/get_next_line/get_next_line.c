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
	char		*line;
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes_read = 1;
	if (!find_newline(next))
		next = read_file(fd, next, &bytes_read);
	if (bytes_read == 0 && (!next || !*next))
		return (free(next), NULL);
	line = ft_get_line(next);
	next = ft_get_rest(next);
	return (line);
}

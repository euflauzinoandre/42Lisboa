/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:26:01 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/09/16 18:29:38 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	*next[4096];
	char		*line;
	int			bytes_read;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	bytes_read = 1;
	if (!find_newline(next[fd]))
		next[fd] = read_file(fd, next[fd], &bytes_read);
	if (bytes_read == 0 && (!next[fd] || !*next[fd]))
		return (free(next[fd]), NULL);
	line = ft_get_line(next[fd]);
	next[fd] = ft_get_rest(next[fd]);
	return (line);
}

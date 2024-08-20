/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:26:01 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/08/20 16:35:08 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*remainder;
	char		*get_line;
	char		buffer[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!remainder)
		remainder = read_file(fd, buffer);
	if (remainder)
	{
		get_line = ft_get_line (remainder);
		remainder = ft_get_rest (remainder);
	}
	return (get_line);
}

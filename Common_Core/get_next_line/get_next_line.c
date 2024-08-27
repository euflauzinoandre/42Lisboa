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
	static char	*rest;
	char		*get_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!find_newline(rest))
		rest = read_file(fd, rest);
	if (!rest)
		return (NULL);
	get_line = ft_get_line(rest);
	rest = ft_get_rest(rest);
	return (get_line);
}

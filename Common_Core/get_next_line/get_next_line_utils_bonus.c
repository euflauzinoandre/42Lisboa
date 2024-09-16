/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:27:13 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/09/16 17:07:56 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*find_newline(char *str)
{
	int	i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (&str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = 0;
	len_s2 = 0;
	while (s1 && s1[len_s1] != '\0')
		len_s1++;
	while (s2 && s2[len_s2] != '\0')
		len_s2++;
	newstr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!newstr)
		return (NULL);
	len_s1 = 0;
	while (s1 && s1[len_s1] != '\0')
	{
		newstr[len_s1] = s1[len_s1];
		len_s1++;
	}
	len_s2 = 0;
	while (s2 && s2[len_s2] != '\0')
		newstr[len_s1++] = s2[len_s2++];
	newstr[len_s1] = '\0';
	return (newstr);
}

char	*read_file(int fd, char *next, int *bytes_read)
{
	char	*temp;
	char	*buffer;

	buffer = malloc (sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (!find_newline(next))
	{
		*bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (*bytes_read < 0)
			return (free(buffer), free(next), NULL);
		if (*bytes_read == 0)
			break ;
		buffer[*bytes_read] = '\0';
		temp = ft_strjoin(next, buffer);
		free(next);
		next = temp;
	}
	return (free(buffer), next);
}

char	*ft_get_line(char *str)
{
	char	*get_line;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	get_line = malloc(sizeof(char) * (i + 2));
	if (!get_line)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		get_line[i] = str[i];
		i++;
	}
	if (str[i] && str[i] == '\n')
		get_line[i++] = '\n';
	get_line[i] = '\0';
	return (get_line);
}

char	*ft_get_rest(char *str)
{
	char	*rest;
	size_t	len_str;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i++])
		return (free(str), NULL);
	len_str = 0;
	while (str && str[len_str] != '\0')
		len_str++;
	rest = malloc(sizeof(char) * ((len_str - i) + 1));
	if (!rest)
		return (NULL);
	len_str = 0;
	while (str[i] != '\0')
		rest[len_str++] = str[i++];
	rest[len_str] = '\0';
	return (free(str), rest);
}

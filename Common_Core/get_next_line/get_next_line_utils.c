/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:27:13 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/08/20 16:43:15 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*find_newline(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == '\n')
			return (str[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!newstr)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	*read_file(int fd, char *buffer)
{
	char	*create_line;
	char	has_newline;

	has_newline = NULL;
	while (has_newline != '\n' && read(fd, buffer, BUFFER_SIZE) > 0)
	{
		create_line = ft_strjoin(create_line, buffer);
		//free nas strings desnecessarias criadas temporariamente
		has_newline = find_newline(buffer);
	}
	return (create_line);
}

char	*ft_get_line(char *str)
{
	char	*get_line;
	int	i;
	int	j;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i++] != '\n')
	get_line = malloc(sizeof(char) * (i + 1));
	j = 0;
	while (j < i)
	{
		get_line[j] = str[j];
		j++;
	}
	get_line[j] = '\0';
	return (get_line);
}

char	*ft_get_rest(char *str)
{
	char	*temp;
	int	size;
	int	i;
	int	j;

	size = 0;
	i = 1;
	while (str[i++] != '\0')
		size++;
	temp = malloc(sizeof(char) * (i + 1));
	temp = ft_strjoin(temp, str);
	free(str);
	i = 0;
	while (temp[i++] != '\n')
	if (!temp[i])
		return (NULL);
	str = malloc(sizeof(char) * (size - i));
	j = 0;
	while (temp[i] != '\0')
		str[j++] = temp[i++];
	str[j] = '\0';
	free(temp);
	return (str);
}

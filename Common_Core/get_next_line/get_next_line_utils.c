/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:27:13 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/08/27 16:59:15 by aeuflauz         ###   ########.fr       */
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
			return (&str[i]);
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	newstr = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!newstr && !s1 && !s2)
		return (NULL);
	i = 0;
	while (s1 && s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j] != '\0')
		newstr[i++] = s2[j++];
	newstr[i] = '\0';
	return (newstr);
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
	int		i;
	int		j;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (!str[i])
	{
		free(str);
		return (NULL);
	}
	i++;
	rest = malloc(sizeof(char) * (ft_strlen(str) - i + 1));
	if (!rest)
		return (NULL);
	j = 0;
	while (str[i] != '\0')
		rest[j++] = str[i++];
	rest[j] = '\0';
	free(str);
	return (rest);
}

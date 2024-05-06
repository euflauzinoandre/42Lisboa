/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 22:01:15 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/01 14:04:52 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
		{
			while (s[i] == c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**word_vector;
	int		count;
	int		i;
	int		j;
	int		word;

	count = count_words(s, c);
	word_vector = malloc(sizeof(char *) * (count + 1));
	if (!word_vector)
		return (NULL);
	i = 0;
	word = 0;
	while (word < count)
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		word_vector[word++] = ft_substr(s, i, (j - i));
		i = j;
	}
	word_vector[word] = NULL;
	return (word_vector);
}

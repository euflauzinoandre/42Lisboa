/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 22:01:15 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/21 03:41:06 by aeuflauz         ###   ########.fr       */
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

static char	**erase_words(char **word_vector, int position)
{
	while (position > 0)
		free(word_vector[--position]);
	free(word_vector);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**word_vector;
	int		i;
	int		j;
	int		word;

	word_vector = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!word_vector)
		return (NULL);
	i = 0;
	word = 0;
	while (word < count_words(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		word_vector[word++] = ft_substr(s, i, (j - i));
		if (!word_vector)
			return (erase_words(word_vector, word));
		i = j;
	}
	word_vector[word] = NULL;
	return (word_vector);
}

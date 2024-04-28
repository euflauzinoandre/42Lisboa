/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:35:49 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/21 12:15:02 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(int size, char **str, char *sep)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	total = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			j++;
			total++;
		}
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	return (total + (i * (size - 1)));
}

char	*ft_strcat(char *dest, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (str[j] != '\0')
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*arr;

	if (size == 0)
	{
		arr = malloc(sizeof(char));
		*arr = '\0';
		return (arr);
	}
	arr = malloc((sizeof(char) * ft_strlen(size, strs, sep)) + 1);
	if (!arr)
		return (NULL);
	i = 0;
	arr[i] = '\0';
	while (i < size && strs[i] != NULL)
	{
		ft_strcat(arr, strs[i]);
		if (i < (size - 1))
			ft_strcat(arr, sep);
		i++;
	}
	return (arr);
}

/*
int	main(void)
{
	char	*string[] = {"Thor", "Rogers", "Stark", "Parker", "Banner", "Romanoff"};
	char	*sep = ", ";
	int	size = sizeof(string)/sizeof(string[0]);
	
	printf("%s", ft_strjoin(size, string, sep));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:31:16 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/21 16:32:02 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0' || to_find[j] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if (j == 0)
				start = i;
			i++;
			j++;
			if (to_find[j] == '\0')
				return (str = &str[start]);
		}
		if (to_find[j] != '\0' && str[i] != '\0' && str[i] != to_find[j])
			i++;
		else
			break ;
	}
	return (NULL);
}

/*
int	main(void)
{
	char string[] = "O rato roeu a roupa do rei de roma.";
	char substring[] = "";
	char *str;
	char *to_find;
	
	str = string;
	to_find = substring;
	printf("%s\n", ft_strstr(str, to_find));
	return (0);
}
*/

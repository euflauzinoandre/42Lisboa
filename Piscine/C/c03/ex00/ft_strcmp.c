/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:24:31 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/21 16:24:52 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

/*
int	main(void)
{
	char	string1[] = "ABC";
	char	string2[] = "ABC";
	char	*s1;
	char	*s2;

	s1 = string1;
	s2 = string2;
	printf("%s", string1);
	printf("\n%s", string2);
	printf("\n%d", ft_strcmp(s1, s2));
	return (0);
}
*/

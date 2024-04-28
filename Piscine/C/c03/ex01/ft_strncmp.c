/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:26:26 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/21 16:26:54 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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
	char		string1[] = "ACC";
	char		string2[] = "ABCD";
	char		*s1;
	char		*s2;
	unsigned int	n;

	s1 = string1;
	s2 = string2;
	n = 3;
	printf("%s", string1);
	printf("\n%s", string2);
	printf("\n%d", ft_strncmp(s1, s2, n));
	return (0);
}
*/

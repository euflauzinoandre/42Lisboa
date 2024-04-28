/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:26:05 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/10 16:36:54 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int	main(void)
{
	char	original[100] = "42Lisboa";
	char	copy[100];
	char	*src;
	char	*dest;

	src = original;
	dest = copy;

	printf("ORIGINAL = ");
	printf("%s", original);

	ft_strcpy(dest, src);

	printf("\nCOPY = ");
	printf("%s", copy);

	return (0);
}
*/

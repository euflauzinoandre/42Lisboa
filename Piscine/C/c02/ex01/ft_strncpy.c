/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 14:44:22 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/10 16:35:41 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	original[100] = "42Lisboa";
	char	copy[100];
	char	*src;
	char	*dest;
	unsigned int n;
	int	i;

	src = original;
	dest = copy;
	n = 3;
	
	printf("ORIGINAL = %s", original);
	ft_strncpy(dest, src, n);
	printf("\nCOPY = %s", copy);
	return (0);
}
*/

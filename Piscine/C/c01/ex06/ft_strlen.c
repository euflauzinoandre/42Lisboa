/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:19:29 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/06 22:25:27 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

/*
int	main(void)
{
	char	hero[50] = "spiderman";
	char	*str;
	int	size;

	str = hero;
	size = ft_strlen(str);
	printf("Size of string = %d\n", size);
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 20:35:26 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/04/15 21:06:20 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*p;
	size_t		i;

	i = 0;
	p = str;
	while (i < n)
	{
		if (p[i] == (char)c)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}

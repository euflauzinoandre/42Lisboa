/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:07:26 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/04/16 16:19:32 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	size;

	size = ft_strlen(str) + 1;
	s = malloc(size);
	if (!s)
		return (NULL);
	ft_memcpy(s, str, size);
	s[size - 1] = '\0';
	return (s);
}

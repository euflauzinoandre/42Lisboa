/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:24:32 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/06 18:57:13 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*s;

	s = NULL;
	while (*str)
	{
		if (*str == (char)c)
			s = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)s);
}

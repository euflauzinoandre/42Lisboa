/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 15:24:32 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/04/15 20:48:44 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*p;

	p = NULL;
	while (*str)
	{
		if (*str == (char)c)
			p = str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)p);
}

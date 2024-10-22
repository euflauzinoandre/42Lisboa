/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 16:07:26 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/10/15 14:26:58 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"

char	*ft_strdup(const char *str)
{
	char	*s;
	size_t	size;

	size = ft_strlen(str);
	s = malloc(sizeof(char) * size + 1);
	if (!s)
		return (NULL);
	ft_memcpy(s, str, size);
	s[size] = '\0';
	return (s);
}

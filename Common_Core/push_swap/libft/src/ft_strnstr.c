/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 22:11:17 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/05 14:23:09 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	i;

	i = 0;
	len_little = ft_strlen(little);
	if (len_little == 0)
		return ((char *)big);
	while (*big && (i + len_little) <= len)
	{
		if (ft_strncmp(big, little, len_little) == 0)
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}

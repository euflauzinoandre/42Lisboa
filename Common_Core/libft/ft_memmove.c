/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 14:42:32 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/04/15 19:46:16 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*temp[sizeof(src)];
	char		*d;
	const char	*s;

	d = dest;
	s = src;
	ft_memcpy(temp, s, n);
	ft_memcpy(d, temp, n);
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:46:32 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/10/15 14:43:55 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/libft.h"
#include <stddef.h>

void	*ft_memset(void *str, int c, size_t n)
{
	char	*s;

	s = str;
	while (n--)
		*s++ = c;
	return (str);
}

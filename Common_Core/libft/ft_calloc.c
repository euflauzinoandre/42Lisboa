/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:34:40 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/04/16 16:00:18 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void		*allocated_memory;
	size_t		total_size;
	size_t		i;

	total_size = nitems * size;
	allocated_memory = malloc(total_size);
	if (nitems == 0 || size == 0)
		return (NULL);
	i = 0;
	while (i < total_size)
	{
		((char *)allocated_memory)[i] = 0;
		i++;
	}
	return (allocated_memory);
}

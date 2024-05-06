/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:34:40 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/05/01 14:02:37 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void		*allocated_memory;
	size_t		total_size;

	if (nitems == 0 || size == 0)
	{
		allocated_memory = malloc(0);
		if (!allocated_memory)
			return (NULL);
		return (allocated_memory);
	}
	total_size = nitems * size;
	if (nitems != total_size / size)
		return (NULL);
	allocated_memory = malloc(total_size);
	if (!allocated_memory)
		return (NULL);
	ft_bzero(allocated_memory, total_size);
	return ;
}

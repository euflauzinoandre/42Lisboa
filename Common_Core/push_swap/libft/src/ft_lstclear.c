/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:19:56 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/11/05 14:21:10 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!*lst || !lst || !del)
		return ;
	ft_lstclear(&(*lst)->next, del);
	del((*lst)->content);
	free(*lst);
	*lst = NULL;
}

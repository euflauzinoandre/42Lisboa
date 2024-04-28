/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:44:47 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/18 10:45:02 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

/*
int	main(void)
{
	//Positive number
	ft_is_negative(5);
	
	//Null number
	ft_is_negative(0);
	
	//Negative number
	ft_is_negative(-3);
	
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:47:55 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/18 10:48:10 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	right = 0;
	while (left < 98)
	{
		right++;
		if (right == 100)
		{
			left++;
			right = left + 1;
		}
		ft_putchar(left / 10 + '0');
		ft_putchar(left % 10 + '0');
		ft_putchar(' ');
		ft_putchar(right / 10 + '0');
		ft_putchar(right % 10 + '0');
		if (left < 98)
		{
			write(1, ", ", 2);
		}
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/

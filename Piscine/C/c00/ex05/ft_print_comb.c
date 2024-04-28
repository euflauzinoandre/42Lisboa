/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:46:22 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/18 10:46:39 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char first, char second, char third)
{
	if (second > first && second < third)
	{
		write(1, &first, 1);
		write(1, &second, 1);
		write(1, &third, 1);
		if (first < '7')
		{
			write(1, ", ", 2);
		}
	}
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '/';
	while (++first <= '9')
	{
		second = '/';
		while (++second <= '9')
		{
			third = '/';
			while (++third <= '9')
			{
				ft_putchar(first, second, third);
			}
		}
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:49:34 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/18 10:51:05 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	to_char(int nb)
{
	if (nb >= 10)
		to_char(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int	negative(int nb)
{
	nb *= -1;
	write(1, "-", 1);
	return (nb);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
		nb = negative(nb);
	to_char(nb);
}

/*
int	main(void)
{
	ft_putnbr(0);
	return (0);
}
*/

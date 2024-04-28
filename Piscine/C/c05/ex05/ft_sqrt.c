/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 17:06:21 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/16 17:06:35 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	i = nb / 2;
	while ((i * i) > nb)
	{
		i = (i + nb / i) / 2;
	}
	if (i * i == nb)
	{
		return (i);
	}
	else
	{
		return (0);
	}
}

/*
int	main(void)
{
	int	nb = 16;

	printf("Sqrt of %d is %d", nb, ft_sqrt(nb));
	return (0);
}
*/

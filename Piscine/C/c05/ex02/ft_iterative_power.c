/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:44:50 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/16 17:01:15 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*
int	main(void)
{
	int	nb = 30;
	int	power = 2;
	int	nb_aux = nb;
	int	power_aux = power;

	if (power_aux < 0)
		printf("%d^(%d) = ", nb_aux, power_aux);
	if (power_aux >= 0)
		printf("%d^%d = ", nb_aux, power_aux);
	while (power_aux >= 1)
	{
		if (power_aux < 0)
			break ;
		if (nb_aux == 0 || nb_aux == 1
				|| power_aux == 0 || power_aux == 1)
			break ;
		if (nb_aux < 0)
		{
			printf("(");
			printf("%d", nb_aux);
			printf(")");
		}
		if (nb_aux > 0)
			printf("%d", nb_aux);
		power_aux--;
		if (power_aux >= 1)
			printf("*%d", nb_aux);
		if(power_aux == 0)
			printf(" = ");
	}
	printf(" = %d", ft_iterative_power(nb, power));
	return (0);
}
*/

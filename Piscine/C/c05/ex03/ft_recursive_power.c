/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:55:09 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/16 16:59:47 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, (power - 1)));
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
	printf(" = %d", ft_recursive_power(nb, power));
	return (0);
}
*/

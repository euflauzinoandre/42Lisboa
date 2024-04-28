/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/16 16:30:40 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/16 16:30:57 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb *= ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	nb = 8;
	int	aux = nb;

	printf("%d!", aux);
	while (aux >= 2)
	{
		if (nb < 0)
			break ;
		else if(nb == 0 || nb == 1)
			break ;
		else if (aux == nb)
			printf(" %d", aux);
		printf("*%d", (aux - 1));
		aux -= 1;
	}
	printf(" = %d", ft_recursive_factorial(nb));
	return (0);
}
*/

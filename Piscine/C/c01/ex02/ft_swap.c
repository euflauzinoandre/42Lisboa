/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:22:32 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/06 21:35:27 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

/*
int	main(void)
{
	int	attack;
	int	defense;
	int	*a;
	int	*b;

	//Set value to variables
	attack = 10;
	defense = 5;
	a = &attack;
	b = &defense;
	
	printf("\n## IT`S DUEL TIME ##\n");
	//Show values before swap
	printf("\n... before swap\n");
	printf("Value of attack = %d\n", attack);
	printf("Value of defense = %d\n", defense);

	//Swap values
	ft_swap(a, b);

	//Show values after swap
	printf("\n... after swap\n");
	printf("Value of attack = %d\n", attack);
	printf("Value of defense = %d\n", defense);

	return (0);
}
*/

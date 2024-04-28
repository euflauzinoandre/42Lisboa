/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:49:46 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/06 22:04:11 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	auxa;
	int	auxb;

	auxa = *a / *b;
	auxb = *a % *b;
	*a = auxa;
	*b = auxb;
}

/*
int	main(void)
{
	int	numa;
	int	numb;
	int	*a;
	int	*b;

	numa = 15;
	numb = 7;
	a = &numa;
	b = &numb;

	//Show numbers after function
	printf("Value of A before DIV = %d\n", numa);
	printf("Value of B before MOD = %d\n", numb);

	//Execute function do DIV and MOD with A and B
	ft_ultimate_div_mod(a, b);

	//Function to execute DIV and MOD on A and B
	printf("\nValue of A after DIV = %d\n", numa);
	printf("Value of B after MOD = %d\n", numb);
	return (0);
}
*/

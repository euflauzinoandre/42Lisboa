/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:38:59 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/06 21:47:53 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int	value_div;
	int	value_mod;
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 11;
	b = 2;
	div = &value_div;
	mod = &value_mod;
	ft_div_mod(a, b, div, mod);
	printf("Value of DIV = %d\n", value_div);
	printf("Value of MOD = %d\n", value_mod);
	return(0);
}
*/

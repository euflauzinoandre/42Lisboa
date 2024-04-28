/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:28:00 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/06 23:16:40 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	half;
	int	i;

	half = size / 2;
	i = -1;
	while (++i < half)
	{
		size--;
		aux = tab[size];
		tab[size] = tab[i];
		tab[i] = aux;
	}
}

/*
void	show(int size, int array[])
{
	int	i;

	i = -1;
	while (++i < size)
	{
		printf("%d ", array[i]);
	}
}

int	main(void)
{
	int	elements[] = {5, 9, 7, 3, 1, 4, 6, 8, 12, 78};
	int	*tab;
	int	size;

	tab = elements;
	size = sizeof(elements)/sizeof(elements[0]);
	
	//Show elements before inversion
	printf("CURRENCY ELEMENTS = ");
	show(size, elements);

	//Function to reverse elements
	ft_rev_int_tab(tab, size);

	//Show elements after inversion
	printf("\nREVERSE ELEMENTS = ");
	show(size, elements);
}
*/

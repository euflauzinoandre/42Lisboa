/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 23:17:59 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/06 23:42:10 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				aux = tab[j];
				tab[j] = tab[i];
				tab[i] = aux;
			}
			j++;
		}
		i++;
	}
}

/*
void	show(int size, int elements[])
{
	int	i;

	i = -1;
	while (++i < size)
	{
		printf("%d ", elements[i]);
	}
}

int	main(void)
{
	int	elements[] = {5, 8, 1, 9, 3, 2, 6, 0, 7};
	int	*tab;
	int	size;

	tab = elements;
	size = sizeof(elements)/sizeof(elements[0]);

	//Show original elements
	printf("ORIGINAL Elements = ");
	show(size, elements);

	//Use function to organizer elements
	ft_sort_int_tab(tab, size);

	//Show elements organized
	printf("\nORGANIZED Elements = ");
	show(size, elements);
	
	return (0);
}
*/

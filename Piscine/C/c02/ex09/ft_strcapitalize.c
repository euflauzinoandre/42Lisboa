/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:07:54 by aeuflauz          #+#    #+#             */
/*   Updated: 2024/03/10 17:08:50 by aeuflauz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alpha(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z') 
		return (0);
	else if (str[i] >= 'A' && str[i] <= 'Z')
		return (1);
	else if (str[i] >= '0' && str[i] <= '9')
		return (2);
	return (3);
}

void	uppercase(char *str, int i, int j, int verify)
{
	if (j == 0 && verify == 0)
		str[i] -= 32;
	else if (j == 0 && verify == 1)
		str[i] = str [i];
	else if (j > 0 && (verify == 0 || verify == 2))
		str[i] = str[i];
	else if (j > 0 && verify == 1)
		str[i] += 32;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;
	int	verify;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		verify = is_alpha(str, i);
		if (verify != 3)
		{
			uppercase(str, i, j, verify);
			j++;
			i++;
		}
		else
		{
			str[i] = str[i];
			i++;
			j = 0;
		}
	}
	return (str);
}

/*
int	main(void)
{
	char	string[100] = "ola, Tudo beM? 42PalavraS quarenta-e-duas; cinquenta+e+um";
	char	*str;

	str = string;
	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/

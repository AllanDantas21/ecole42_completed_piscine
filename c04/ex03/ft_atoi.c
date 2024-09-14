/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 01:32:58 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/14 16:08:18 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char str1[] = " ---+--+1234ab567";
	char str2[] = "   +42";
	char str3[] = "   -+-+---512";
	char str4[] = "   2147483647";
	char str5[] = "   -2147483648";

	printf("Resultado 1: %d\n", ft_atoi(str1));  // Deve imprimir -1234
	printf("Resultado 2: %d\n", ft_atoi(str2));  // Deve imprimir 42
	printf("Resultado 3: %d\n", ft_atoi(str3));  // Deve imprimir -512
	printf("Resultado 4: %d\n", ft_atoi(str4));  // Deve imprimir 2147483647
	printf("Resultado 5: %d\n", ft_atoi(str5));  // Deve imprimir -2147483648

	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 01:45:44 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/06 02:00:12 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("Próximo primo >= 10: %d\n", ft_find_next_prime(10));  
    // Deve retornar 11
	printf("Próximo primo >= 14: %d\n", ft_find_next_prime(14));  
    // Deve retornar 17
	printf("Próximo primo >= 17: %d\n", ft_find_next_prime(17));  
    // Deve retornar 17
	printf("Próximo primo >= 29: %d\n", ft_find_next_prime(29));  
    // Deve retornar 29
	printf("Próximo primo >= 40: %d\n", ft_find_next_prime(40));  
    // Deve retornar 41
	printf("Próximo primo >= 1: %d\n", ft_find_next_prime(1));    
    // Deve retornar 2
	return (0);
}/**/

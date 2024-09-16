/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:33:34 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/15 23:48:38 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*result;

	i = 0;
	result = malloc(sizeof(int) * length);
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}

/*
#include <stdio.h>

int ft_add(int n)
{
	return (n + 1);
}

int main()
{
	int tab[5] = {0, 1, 2, 3, 4};
	int *result = ft_map(tab, 5, &ft_add);
	int i = 0;
	while (i < 5)
	{
		printf("%d\n", result[i]);
		i++;
	}
	return (0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 00:06:47 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/16 00:14:35 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int ft_cmp(int a, int b)
{
	return (a - b);
}

int main()
{
	int tab[5] = {1, 2, 3, 4, 5};
	printf("%d\n", ft_is_sort(tab, 5, &ft_cmp));
	return (0);
}*/
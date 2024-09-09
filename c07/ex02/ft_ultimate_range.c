/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:19:16 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/08 20:40:00 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	*range = NULL;
	if (min >= max)
		return (0);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (-1);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	*range = tab;
	return (i);
}

/*
#include <stdio.h>
int main(void)
{
	int *range;
	int i;
	int min;
	int max;

	min = 0;
	max = 10;
	i = ft_ultimate_range(&range, min, max);
	printf("i = %d\n", i);
	while (i--)
		printf("%d\n", range[i]);
	return (0);
}/**/
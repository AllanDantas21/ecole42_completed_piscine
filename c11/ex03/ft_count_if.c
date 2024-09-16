/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:33:39 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/16 00:04:15 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

/*
#include <stdio.h>

int ft_is_upper(char *str)
{
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			return (1);
		str++;
	}
	return (0);
}

int main()
{
	char *tab[5] = {"hello", "WORLD", "42", "RIO", "CPP"};
	printf("%d\n", ft_count_if(tab, 5, &ft_is_upper));
	return (0);
}*/
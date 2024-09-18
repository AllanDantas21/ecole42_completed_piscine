/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:47:49 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/18 01:49:38 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
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
	char *tab[5] = {"hello", "world", "42", "RIO", 0};
	printf("%d\n", ft_any(tab, &ft_is_upper));
	return (0);
}*/
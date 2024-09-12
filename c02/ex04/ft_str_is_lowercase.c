/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:51:56 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/12 00:25:28 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			c++;
		i++;
	}
	if (c == i || i == 0)
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
int     main()
{
        printf("%s",ft_str_is_lowercase(""));
}*/

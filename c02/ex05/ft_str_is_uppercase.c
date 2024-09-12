/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:58:52 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/12 00:25:42 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
        ft_str_is_uppercase("");
}*/

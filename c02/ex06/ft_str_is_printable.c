/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:05:16 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/12 00:25:50 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
        printf("%s",ft_str_is_printable(""));
}*/

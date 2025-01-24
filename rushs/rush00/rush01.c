/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:19:36 by aldantas          #+#    #+#             */
/*   Updated: 2025/01/12 16:03:57 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	l;

	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if (((c == 1) && (l == 1))
				|| ((c == x) && (l == y) && (y > 1) && (x > 1)))
				ft_putchar('/');
			else if ((c == 1) && (l == y) || (c == x) && (l == 1))
				ft_putchar('\\');
			else if (c == 1 || l == 1 || l == y || c == x)
				ft_putchar('*');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}

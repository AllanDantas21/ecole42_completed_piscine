/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 22:08:47 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/11 19:41:52 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

static void	ft_micro_putnbr(int n)
{
	char	*base;

	base = "0123456789";
	if (n >= 10)
		ft_micro_putnbr(n / 10);
	write(1, &base[n % 10], 1);
}

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	second = -1;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			if (first <= 9)
				write(1, "0", 1);
			ft_micro_putnbr(first);
			write(1, " ", 1);
			if (second <= 9)
				write(1, "0", 1);
			ft_micro_putnbr(second);
			if (first != 98)
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
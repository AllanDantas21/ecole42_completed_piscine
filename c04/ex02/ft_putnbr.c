/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 22:35:21 by aldantas          #+#    #+#             */
/*   Updated: 2025/01/12 13:06:28 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putnbr(int nbr)
{
	const char	*base = "0123456789";

	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nbr *= -1);
		return ;
	}
	else if (nbr >= 10)
		ft_putnbr(nbr / 10);
	write(1, &base[nbr % 10], 1);
}

/*
int main(void)
{
	ft_putnbr(62931);
}*/
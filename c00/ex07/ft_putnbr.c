/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 22:35:21 by aldantas          #+#    #+#             */
/*   Updated: 2025/03/17 16:53:43 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putnbr(int nb)
{
	char	*base;

	base = "0123456789";
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		ft_putnbr(nb *= -1);
		return ;
	}
	else if (nb >= 10)
		ft_putnbr(nb / 10);
	write(1, &base[nb % 10], 1);
}

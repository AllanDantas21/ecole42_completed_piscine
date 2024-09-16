/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 00:32:26 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/16 01:33:16 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *nptr)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while ((*nptr == 32) || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		res *= 10;
		res += *nptr++ - '0';
	}
	return ((res * sign));
}

void	ft_putnbr(int nbr)
{
	char	*base;

	base = "0123456789";
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

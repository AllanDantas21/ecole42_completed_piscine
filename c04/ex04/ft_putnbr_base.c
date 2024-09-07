/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 01:51:24 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/07 17:56:12 by aldantas         ###   ########.fr       */
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

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	nb = nbr;
	len = ft_strlen(base);
	if (ft_check_base(base))
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb < len)
			write(1, &base[nb], 1);
		if (nb >= len)
		{
			ft_putnbr_base(nb / len, base);
			ft_putnbr_base(nb % len, base);
		}
	}
}

// #include <stdio.h>
// int		main(void)
// {
// 	ft_putnbr_base(-12, "01");
// 	printf("\n");
// 	ft_putnbr_base(40, "poneyvif");
// 	printf("\n");
// 	ft_putnbr_base(894867, "0123456789");
// 	printf("\n");
// 	ft_putnbr_base(53, "0123456789abcdef");
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:21:21 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/14 23:53:12 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(const char *str);
int	ft_check_base(const char *base);
int	ft_atoi_base(char *str, char *base);

static int	sizenum_base(long n, int base_len)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	else if (n == 0)
		return (1);
	while (n > 0)
	{
		count++;
		n = n / base_len;
	}
	return (count);
}

static char	*ft_itoa_base(int n, char *base)
{
	int		base_len;
	int		size;
	char	*str;
	long	nb;

	nb = n;
	base_len = ft_strlen(base);
	size = sizenum_base(nb, base_len);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	else if (nb == 0)
		str[0] = base[0];
	while (nb > 0)
	{
		str[--size] = base[nb % base_len];
		nb = nb / base_len;
	}
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*str;

	if (!nbr || !ft_check_base(base_from) || !ft_check_base(base_to))
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	str = ft_itoa_base(n, base_to);
	return (str);
}
/*#include <stdio.h>
int main (int ac, char **av)
{
	(void)ac;
	if (ac == 4)
		printf("%s", ft_convert_base(av[1], av[2], av[3]));
}*/
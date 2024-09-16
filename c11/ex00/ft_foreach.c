/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:33:30 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/15 23:40:06 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

/*
#include <unistd.h>

void ft_putnbr(int nb)
{
    char c;

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb > 9)
        ft_putnbr(nb / 10);
    c = nb % 10 + '0';
    write(1, &c, 1);
}

int main()
{
    int tab[5] = {1, 2, 3, 4, 5};

    ft_foreach(tab, 5,  &ft_putnbr);
    return (0);
}*/
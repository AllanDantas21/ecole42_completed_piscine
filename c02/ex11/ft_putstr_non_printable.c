/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:46:46 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/13 23:02:18 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			ft_puthex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
/*
int main() {
	// Teste: String com caracteres não imprimíveis
	char str2[] = "This is a \t test \n string.";
	ft_putstr_non_printable(str2);
	ft_putchar('\n');


	// Teste: Apenas não imprimíveis
	char str4[] = "\a\n\r";
	ft_putstr_non_printable(str4);
	ft_putchar('\n');

	return 0;
}*/
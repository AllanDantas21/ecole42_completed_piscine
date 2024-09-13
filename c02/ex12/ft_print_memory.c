/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:56:52 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/13 00:01:27 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(unsigned char c)
{
	const char	*hex = "0123456789abcdef";
	char		hex_rep[2];

	hex_rep[0] = hex[c / 16];
	hex_rep[1] = hex[c % 16];
	write(1, hex_rep, 2);
}


void	ft_print_address(unsigned long long addr)
{
	const char	*hex = "0123456789abcdef";
	char		address[16];
	int			i;

	i = 15;
	while (i >= 0)
	{
		address[i] = hex[addr % 16];
		addr /= 16;
		i--;
	}
	i = 0;
	while (address[i] != '\0')
	{
		write(1, &address[i], 1);
		i++;
	}
}

void	ft_hex_content(char *memory, unsigned int bytes)
{
	unsigned int	j;

	j = 0;
	while (j < 16)
	{
		if (j < bytes)
			ft_print_hex(memory[j]);
		else
			write(1, "  ", 2);
		if (j % 2 != 0)
			write(1, " ", 1);
		j++;
	}
}

void	ft_print_chars(unsigned char *addr, unsigned int bytes)
{
	unsigned int	i;

	i = 0;
	while (i < bytes)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			write(1, &addr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned int	bytes;
	unsigned long long	memory;

	if (size == 1)
		return (addr);
	i = 0;
	while (i <= size)
	{
		memory = (unsigned long long)(addr + i);
		ft_print_address(memory);
		write(1, ": ", 2);
		if (size - i > 16)
			bytes = 16;
		else
			bytes = size - i;
		ft_hex_content(addr + i, bytes);
		ft_print_chars(addr + i, bytes);
		write(1, "\n", 1);
		i += 16;
	}
	write(1, "\n", 1);
	return (addr);
}
/*
#include <stdio.h>
int main() {
	char str[] = "Bonjour les aminches\t\n\tc'est fou\tce qu'on peutfaire avec\t\n\tprint_memory\n\nlol.lol\n ";
	ft_print_memory(str, sizeof(str));
	return 0;
}*/
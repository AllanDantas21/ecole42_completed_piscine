/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:56:52 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/09 02:07:04 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(unsigned char c)
{
	const char	*hex = "0123456789abcdef";

	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
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
		write(1, &address[i++], 1);
}

void	ft_hex_content(unsigned char *memory, unsigned int i,
			unsigned int size)
{
	unsigned int	j;

	j = 0;
	while (j < 16)
	{
		if (i + j < size)
			ft_print_hex(memory[i + j]);
		else
			write(1, "  ", 2);
		if (j % 2 != 0)
			write(1, " ", 1);
		j++;
	}
}

void	ft_print_chars(unsigned char *addr, unsigned int i, unsigned int size)
{
	unsigned int	j;

	if (size - i > 16)
		j = 16;
	else
		j = size - i;
	while (j > 0)
	{
		if (*addr >= 32 && *addr <= 126)
			write(1, addr, 1);
		else
			write(1, ".", 1);
		addr++;
		j--;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*memory;

	i = 0;
	memory = (unsigned char *)addr;
	while (i < size)
	{
		ft_print_address((unsigned long long)(memory + i));
		write(1, ": ", 2);
		ft_hex_content(memory + i, i, size);
		ft_print_chars(memory + i, i, size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
/*
int main() {
	char str[] = "Bonjour les aminches\t\n\tc'est fou\tce qu'on peut
	faire avec\t\n\tprint_memory\n\nlol.lol\n ";
	ft_print_memory(str, sizeof(str));
	return 0;
}/**/

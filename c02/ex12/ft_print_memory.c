/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:56:52 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/14 01:04:32 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_print_address(unsigned long addr)
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
	while (i < 16)
	{
		write(1, &address[i], 1);
		i++;
	}
	write(1, ": ", 2);
}

static void	ft_hex_content(unsigned char *addr, unsigned int limit)
{
	const char	*hex = "0123456789abcdef";
	unsigned int	i;

	i = 0;
	while (i < 16)
	{
		if (i < limit)
		{
			write(1, &hex[addr[i] / 16], 1);
			write(1, &hex[addr[i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}
}

static void	ft_print_chars(unsigned char *addr, unsigned int limit)
{
	unsigned int	i;

	i = 0;
	while (i < limit)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			write(1, &addr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

static unsigned int	adjust_limit(unsigned int i, unsigned int size)
{
	if (i + 16 > size)
		return (size - i);
	return (16);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int		i;
	unsigned int		limit;

	if (size < 1)
		return (addr);
	i = 0;
	while (i <= size)
	{
		limit = adjust_limit(i, size);
		ft_print_address((unsigned long)addr + i);
		ft_hex_content((unsigned char *)addr + i, limit);
		ft_print_chars((unsigned char *)addr + i, limit);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
/*
#include <stdio.h>
int main() {
	char str[] = "Bonjour les aminches\t\n\tc'est fou\tce \
	qu'on peutfaire avec\t\n\tprint_memory\n\nlol.lol\n ";
	ft_print_memory((void *)str, sizeof(str));
	return 0;
}*/
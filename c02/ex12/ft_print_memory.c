/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:56:52 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/09 01:43:22 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Escreva uma função que exiba uma zona de memória na tela.
// • A exibição da zona de memória deve estar dividida em três "colunas"separa
//das por
// um espaço:
// ◦ O endereço em hexadecimal do primeiro caractere da linha seguido por um
// ’:’.
// ◦ O conteúdo em hexadecimal com um espaço nos dois caracteres e deve ser
// completado com espaços se necessário (veja o exemplo abaixo).
// ◦ O conteúdo em caracteres imprimíveis.
// • Se um caractere for não imprimível, deve ser substituído por um ponto.
// • Cada linha deve administrar dezesseis caracteres.
// • Se size for igual a 0, nada será mostrado.
// 18
// Piscina C C 02
// • Exemplo:
// $> ./ft_print_memory
// 000000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
// 000000010a161f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo
// 000000010a161f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on
// 000000010a161f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.
// 000000010a161f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..
// 000000010a161f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .
// $> ./ft_print_memory | cat -te
// 0000000107ff9f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin$
// 0000000107ff9f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo$
// 0000000107ff9f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on $
// 0000000107ff9f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.$
// 0000000107ff9f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..$
// 0000000107ff9f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .$
// $>
// • Ela deverá ser prototipada da seguinte maneira:
// void *ft_print_memory(void *addr, unsigned int size);
// • Ela deverá retornar addr.

//
//
//	fazer a print memory para 100%
//  -- Video do oceano -> https://www.youtube.com/watch?v=2vk6E0Q79-E

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

// int main() {
// 	char str[] = "Bonjour les aminches\t\n\tc'est fou\tce qu'on peut 
//	faire avec\t\n\tprint_memory\n\nlol.lol\n ";
// 	ft_print_memory(str, sizeof(str));
// 	return 0;
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 01:49:41 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/06 01:55:06 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que mostre todas as possibilidades de posicionar dez damas em
// um tabuleiro de 10x10 sem que elas possam ser atingidas com um único movimento,
// e retorne o número de possibilidades.
// • A recursividade deverá ser utilizada para resolver este problema.
// • Ela deverá ser prototipada da seguinte maneira:
// int ft_ten_queens_puzzle(void);
// • A exibição deverá ser feita da seguinte maneira:
// $>./a.out | cat -e
// 0257948136$
// 0258693147$
// ...
// 4605713829$
// 4609582731$
// ...
// 9742051863$
// $>
// • A sequência é lida da esquerda para a direita. O primeiro dígito corresponde à
// posição da primeira dama na primeira coluna (o índice começando com 0). O
// enésimo número corresponde à posição da enésima dama na enésima coluna.

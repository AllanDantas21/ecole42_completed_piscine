/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 01:51:24 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/06 01:53:36 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Escreva uma função que exiba um número no terminal em uma base dada.
// • Esse número é fornecido como um int e a base como uma cadeia de caracteres.
// • A base contém todos os símbolos utilizáveis para exibir o número:
// ◦ 0123456789 é a base geralmente utilizada para representar nossos números
// decimais;
// ◦ 01 é uma base binária;
// ◦ 0123456789ABCDEF é uma base hexadecimal;
// ◦ poneyvif é uma base octal.
// • A função deve lidar com os números negativos.
// • Se um parâmetro contiver um erro, a função não mostrará nada. Um erro pode ser:
// ◦ a base é vazia ou de tamanho 1;
// ◦ a base contém duas vezes o mesmo caractere;
// ◦ a base contém os caracteres + ou -.
// • Ela deverá ser prototipada da seguinte maneira:
//     *** void ft_putnbr_base(int nbr, char *base); ***

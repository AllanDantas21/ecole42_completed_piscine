/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 01:53:19 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/06 01:53:33 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreva uma função que converta o início de uma string apontada por str em inteiro
// do tipo int.
// • str está em uma base específica passada como segundo argumento da função.
// • Exceto o sistema de base, essa função deve reproduzir o comportamento de ft_atoi.
// • Se um parâmetro contiver um erro, a função retornará 0. Um erro pode ser:
// ◦ a base é vazia ou de tamanho 1;
// ◦ a base contém duas vezes o mesmo caractere;
// ◦ a base contém os caracteres + ou - ou whitespaces;
// • Ela deverá ser prototipada da seguinte maneira:
// int ft_atoi_base(char *str, char *base);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:21:21 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/08 01:24:44 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Escreva uma função que retorne o resultado da conversão da string nbr expressa
// em uma base base_from em uma base base_to.
// • nbr, base_from, base_to não serão necessariamente editáveis.
// • nbr seguirá as mesmas regras que ft_atoi_base. Por isso, cuidado com ’+’, ’-’ e
// whitespaces.
// • O número representado por nbr cabe em um int.
// • Se uma base estiver incorreta, a função irá retornar NULL.
// • O número retornado deve ser prefixado por apenas um ’-’ se for necessário, nada
// de whitespaces ou de ’+’.
// • Ela deverá ser prototipada da seguinte maneira:
// char *ft_convert_base(char *nbr, char *base_from, char *base_to);
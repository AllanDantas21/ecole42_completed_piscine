/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:19:04 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/08 01:41:28 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    int i;

    if (min >= max)
        return (0);
    range = malloc(sizeof(int) * (max - min));
    if (!range)
        return (0);
    i = 0;
    while (min < max)
        range[i++] = min++;
    return (range);
}

// #include <stdio.h>
// int main(void)
// {
//     int *range;
//     int i;

//     range = ft_range(1, 10);
//     i = 0;
//     while (i < 9)
//     {
//         printf("%d\n", range[i]);
//         i++;
//     }
//     return (0);
// }
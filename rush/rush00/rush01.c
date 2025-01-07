/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 18:19:36 by aldantas          #+#    #+#             */
/*   Updated: 2025/01/06 22:44:36 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c);

void    rush(int x, int y)
{
    int c;
    int l;

    c = 1;
    l = 1;
    while (l <= y)
    {
        while (c <= x)
        {
            if ((c == 1) && (l == 1))
                ft_putchar(47);
            else if ((c == x) && (l == y) && (y > 1) && (x > 1))
                ft_putchar(47);
            else if ((c == 1) && (l == y) || (c == x ) && (l == 1))
                ft_putchar(92);
            else if (c == 1 || l == 1 || l == y || c == x)
                ft_putchar(42);
            else
                ft_putchar(32);
            c++;
        }
        ft_putchar(10);
        c = 1;
        l++;
    }
}

int main()
{
    rush(5, 5);
    return (0);
}
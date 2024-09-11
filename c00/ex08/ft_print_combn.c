/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 23:06:40 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/11 01:57:38 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	print_array(int *arr, int n)
{
	static const char	*base = "0123456789";
	int					i;

	i = 0;
	while (i < n)
	{
		write(1, &base[arr[i]], 1);
		i++;
	}
	if (arr[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_recursive_combn(int n, int pos, int *arr, int last_digit)
{
	int	i;

	i = 0;
	if (pos == n)
	{
		print_array(arr, n);
		return ;
	}
	i = last_digit + 1;
	while (i <= 9)
	{
		arr[pos] = i;
		ft_recursive_combn(n, pos + 1, arr, i++);
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];

	if (n > 0 && n < 10)
		ft_recursive_combn(n, 0, arr, -1);
}
/*
int main()
 {
	ft_print_combn(5);
 	return 0;
}*/
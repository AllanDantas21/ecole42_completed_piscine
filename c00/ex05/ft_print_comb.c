/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 20:29:08 by aldantas          #+#    #+#             */
/*   Updated: 2025/03/17 16:52:33 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	hun;
	int	ten;
	int	uni;

	hun = 48;
	while (hun <= 55)
	{
		ten = hun + 1;
		while (ten <= 56)
		{
			uni = ten + 1;
			while (uni <= 57)
			{
				write(1, &hun, 1);
				write(1, &ten, 1);
				write(1, &uni, 1);
				uni++;
				if (hun != 55)
					write(1, ", ", 2);
			}
			ten++;
		}
		hun++;
	}
}

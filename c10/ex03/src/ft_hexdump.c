/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:21:53 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/18 01:47:34 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

int	ft_hexdump(char *file_name);

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc == 3 || argc > 4)
		write(1, "Too many arguments.\n", 20);
	if (argc == 2)
		ft_hexdump(argv[1]);
	return (0);
}

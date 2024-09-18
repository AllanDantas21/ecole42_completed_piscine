/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 00:25:18 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/18 01:38:42 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_display_file(char *file_name);

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 2)
	{
		if (!ft_display_file(argv[1]))
			write(1, "Cannot read file.\n", 18);
	}
	return (0);
}

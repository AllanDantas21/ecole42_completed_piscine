/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 00:25:18 by aldantas          #+#    #+#             */
/*   Updated: 2024/12/25 21:46:02 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_display_file(char *file_name);

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc == 2)
	{
		if (!ft_display_file(argv[1]))
			write(2, "Cannot read file.\n", 18);
	}
	return (0);
}

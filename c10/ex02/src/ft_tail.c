/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:51:10 by aldantas          #+#    #+#             */
/*   Updated: 2024/12/25 21:40:20 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	open_file(char *file_name)
{
	int	fd;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(1, "tail: cannot open \'", 19);
		write(1, file_name, ft_strlen(file_name));
		write(1, "' for reading: ", 15);
		ft_error(strerror(errno));
		return (0);
	}
	return (fd);
}

static int	ft_cat(char *file_name, int option)
{
	if (option)
		tail_with_option(file_name, option);
	if (!option)
		tail_no_option(file_name);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc == 3 || argc > 4)
		write(1, "Too many arguments.\n", 20);
	if (argc == 2)
		ft_cat(argv[1], 0);
	else if (argc == 4 && ft_strcmp(argv[1], "-c") == 0)
		ft_cat(argv[3], ft_atoi(argv[2]));
	return (0);
}

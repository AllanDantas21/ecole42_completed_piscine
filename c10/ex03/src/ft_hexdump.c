/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:21:53 by aldantas          #+#    #+#             */
/*   Updated: 2024/12/01 12:34:11 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"
#include <stdio.h>
#include <errno.h>

static size_t	get_all_bytes(char *file_name)
{
	int		fd;
	size_t	size = 0;
	size_t	bytes_read;
	char	buffer[BUFFER_SIZE];

	fd = open(file_name, O_RDONLY);
	if (fd == -1) {
		perror("Error opening file");
		return (0);
	}
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
		size += bytes_read;
	if (bytes_read == 0) {
		perror("Error reading file");
		close(fd);
		return (0);
	}
	buffer[bytes_read] = '\0';
	close(fd);
	return (size);
}

static int	ft_hexdump(int argc, char *argv[])
{
	size_t	size;

	size = 0;
	if (argc == 2)
	{
		size = get_all_bytes(argv[1]);
		ft_hexdump_no_opt(argv[1], size);
	}
	if (argc == 3 && !ft_strcmp(argv[1], "-C"))
	{
		size = get_all_bytes(argv[2]);
		ft_hexdump_opt(argv[2], size);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc <= 1 || argc >= 4)
		return (write(2, "Error\n", 6), 0);
	ft_hexdump(argc, argv);
	return (0);
}

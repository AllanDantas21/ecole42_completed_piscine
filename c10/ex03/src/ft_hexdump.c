/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:21:53 by aldantas          #+#    #+#             */
/*   Updated: 2024/11/30 15:09:32 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexdump.h"

static size_t	get_all_bytes(char *file_name)
{
	int		fd;
	size_t	size = 0;
	ssize_t	bytes_read;
	char	buffer[4096];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return ((size_t)-1);
	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
		size += bytes_read;
	close(fd);
	return (size);
}

static int	ft_hexdump(char *file_name, int argc, char *argv[])
{
	size_t	size;

	size = get_all_bytes(argv[1]);
	if (size == (size_t)-1)
		return (1);
	if (argc == 2)
		write(1, "Future no handle\n", 17);
	else if (argc == 3 && !ft_strcmp(argv[2], "-C"))
		ft_hexdump_opt(file_name, size);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		return (write(2, "Error\n", 6), 0);
	if (ft_hexdump(argv[1], argc, argv))
		write(2, "Error\n", 6);
	return (0);
}

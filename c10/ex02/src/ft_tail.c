/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:51:10 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/17 15:03:30 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static int	count_lines(char *file_name)
{
	int		fd;
	char	buffer[1];
	int		count;

	count = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, buffer, 1))
	{
		if (*buffer == '\n')
			count++;
	}
	close(fd);
	if (count > 10)
		return (count - 10);
	return (0);
}

static int	open_file(char *file_name)
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

static void	ft_print_lines(int fd, int first_line)
{
	char	buffer[1];
	int		count;
	int		ret;

	count = 0;
	ret = 1;
	while (ret != 0)
	{
		ret = read(fd, buffer, 1);
		if (ret == -1)
		{
			ft_error(strerror(errno));
			return ;
		}
		if (ret != 0)
		{
			if (count >= first_line)
				write(1, buffer, 1);
			if (*buffer == '\n')
				count++;
		}
	}
}

int	ft_cat(char *file_name)
{
	int		fd;
	int		first_line;

	fd = open(file_name, O_RDONLY);
	first_line = count_lines(file_name);
	fd = open_file(file_name);
	if (!fd)
		return (0);
	ft_print_lines(fd, first_line);
	close(fd);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc == 2)
		ft_cat(argv[1]);
	return (0);
}

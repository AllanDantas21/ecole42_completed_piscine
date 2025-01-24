/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:56:34 by aldantas          #+#    #+#             */
/*   Updated: 2024/12/25 21:40:23 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

void	ft_error(char *filename, char *err)
{
	write(2, "cat: ", 5);
	while (*filename)
		write(2, filename++, 1);
	write(2, ": ", 2);
	while (*err)
		write(2, err++, 1);
	write(2, "\n", 1);
}

int	ft_display_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buffer[1];

	ret = 1;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		ft_error(file_name, strerror(errno));
		return (1);
	}
	while (ret != 0)
	{
		ret = read(fd, buffer, 1);
		if (ret == -1)
		{
			ft_error(file_name, strerror(errno));
			close(fd);
			return (1);
		}
		if (ret != 0)
			write(1, buffer, 1);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	int		exit_status;
	char	buffer[1];

	exit_status = 0;
	if (argc == 1)
	{
		while (read(0, buffer, 1) > 0)
			write(1, buffer, 1);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		if (ft_display_file(argv[i]) != 0)
			exit_status = 1;
		i++;
	}
	return (exit_status);
}

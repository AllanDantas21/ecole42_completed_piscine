/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_option.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 23:56:28 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/18 01:40:38 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static int	count_bytes(char *file_name, int option)
{
	int		fd;
	char	buffer[1];
	int		bytes;

	bytes = 0;
	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (0);
	while (read(fd, buffer, 1))
		bytes++;
	close(fd);
	return (bytes - option);
}

static void	ft_print_bytes(int fd, int first_bytes)
{
	char	buffer[1];
	int		bytes;
	int		ret;

	bytes = 0;
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
			if (bytes >= first_bytes)
				write(1, buffer, 1);
			bytes++;
		}
	}
}

void	tail_with_option(char *file_name, int option)
{
	int		first_bytes;
	int		fd;

	fd = open_file(file_name);
	if (!fd)
		return ;
	first_bytes = count_bytes(file_name, option);
	ft_print_bytes(fd, first_bytes);
	close(fd);
	return ;
}

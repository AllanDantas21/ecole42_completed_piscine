/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_option.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 00:16:39 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/18 00:19:07 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

static int  count_lines(char *file_name)
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

static void ft_print_lines(int fd, int first_line)
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

void    tail_no_option(char *file_name)
{
		int	first_line;
		int	fd;
		
		fd = open_file(file_name);
		if (!fd)
			return ;
		first_line = count_lines(file_name);
		ft_print_lines(fd, first_line);
		close(fd);
		return ;
}
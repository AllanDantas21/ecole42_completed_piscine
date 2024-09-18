/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_option.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 23:56:28 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/18 00:01:53 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int	count_bytes(char *file_name, int option)
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

void	ft_print_bytes(int fd, int first_bytes)
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
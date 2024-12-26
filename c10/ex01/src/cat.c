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

void	ft_error(char *err)
{
	while (*err)
		write(2, err++, 1);
	write(1, "\n", 1);
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
		ft_error(strerror(errno));
		return (0);
	}
	while (ret != 0)
	{
		ret = read(fd, buffer, 1);
		if (ret == -1)
		{
			ft_error(strerror(errno));
			return (0);
		}
		if (ret != 0)
			write(1, buffer, 1);
	}
	close(fd);
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_display_file(argv[i]);
		i++;
	}
	return (0);
}

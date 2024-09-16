/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 22:56:34 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/15 23:10:27 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "cat.h"

int	ft_display_file(char *file_name)
{
	int		fd;
	char	buffer[1];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
        write(1, "Cannot read file.\n", 18);
        return;
    }
	while (read(fd, buffer, 1))
		write( 1, buffer, 1);
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
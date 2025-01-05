/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 00:25:18 by aldantas          #+#    #+#             */
/*   Updated: 2025/01/05 19:55:15 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_display_file(char *file_name);
static int	ft_strlen(char *str);
static int	ft_strcmp(char *s1, char *s2);

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	if (argc == 2)
	{	
		if (ft_strcmp(argv[1], ".") == 0 || ft_strcmp(argv[1], "/") == 0 
		|| ft_strcmp(argv[1], "..") == 0 || ft_strcmp(argv[1], "./") == 0 
		|| ft_strcmp(argv[1], "../") == 0)
		{
			write(2, argv[1], ft_strlen(argv[1]));
			write(2, ": Is a directory\n", 17);
		}
		else if (!ft_display_file(argv[1]))
			write(2, "Cannot read file.\n", 18);
	}
	return (0);
}

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

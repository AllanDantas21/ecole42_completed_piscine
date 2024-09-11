/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 02:34:15 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/10 21:34:28 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*copy_str(char *src)
{
	int		i;
	char	*dest;

	i = ft_strlen(src);
	dest = malloc(sizeof(char) * (i + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	i = 0;
	tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = copy_str(av[i]);
		i++;
	}
	tab[i].str = 0;
	tab[i].copy = 0;
	return (tab);
}
/*
#include <stdio.h>

int main(int argc, char **argv)
{
	struct s_stock_str *tab;
	int i;

	tab = ft_strs_to_tab(argc, argv);
	i = 0;
	while (tab[i].str)
	{
		printf("size: %d\n", tab[i].size);
		printf("str: %s\n", tab[i].str);
		printf("copy: %s\n", tab[i].copy);
		i++;
	}
	return (0);
}*/

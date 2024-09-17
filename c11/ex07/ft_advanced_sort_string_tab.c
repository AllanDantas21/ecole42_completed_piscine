/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 02:09:14 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/17 02:14:45 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	swap_str(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = i + 1;
		while (tab[j])
		{
			if (cmp(tab[i], tab[j]) > 0)
				swap_str(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int main()
{
	char *tab[] = {"abc", "cat", "bde", 0};
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	int i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return 0;
}*/
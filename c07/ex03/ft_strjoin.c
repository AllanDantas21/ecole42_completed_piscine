/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:19:33 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/09 01:17:45 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	fill_string(char *str, int size, char **strs, char *sep)
{
	int	i;
	int	k;

	i = 0;
	while (i < size)
	{
		k = 0;
		while (strs[i][k])
			*str++ = strs[i][k++];
		k = 0;
		while (i < size - 1 && sep[k])
			*str++ = sep[k++];
		i++;
	}
	*str = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;

	if (size == 0)
		return (malloc(1));
	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	str = malloc(j + (size - 1) * ft_strlen(sep) + 1);
	if (!str)
		return (NULL);
	i = 0;
	fill_string(str, size, strs, sep);
	return (str);
}
/*
#include <stdio.h>
int main(void)
{
	char *strs[] = {"Hello", "World", "42", "RIO"};
	char *sep = " ";
	char *result = ft_strjoin(4, strs, sep);
	printf("%s\n", result);
	free(result);
	return (0);
}/**/
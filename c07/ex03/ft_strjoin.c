/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:19:33 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/09 01:33:35 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static void	fill_string(char *str, int size, char **strs, char *sep)
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

static int	get_bytes(int i, int size, char **strs)
{
	int	bytes;

	bytes = 0;
	while (i < size)
		bytes += ft_strlen(strs[i++]);
	return (bytes);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		bytes;
	int		i;

	if (size == 0)
		return (malloc(1));
	i = 0;
	bytes = get_bytes(i, size, strs);
	str = malloc(bytes + (size - 1) * ft_strlen(sep) + 1);
	if (!str)
		return (NULL);
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
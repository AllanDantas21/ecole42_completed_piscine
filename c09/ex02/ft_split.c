/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 00:08:13 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/14 15:58:22 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char	*ft_substr(char *str, unsigned int start, int len)
{
	char	*substr;
	int		i;

	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

static int	has_on_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

static int	count_words(char *str, char *charset)
{
	int	words;

	if (!str)
		return (0);
	words = 0;
	while (*str)
	{
		while (*str && has_on_charset(*str, charset))
			str++;
		if (*str && !has_on_charset(*str, charset))
			words++;
		while (*str && !has_on_charset(*str, charset))
			str++;
	}
	return (words);
}

static void	fill_matrix(char *str, char *charset, char **arr)
{
	int		letters;
	int		pos;

	pos = 0;
	if (str)
	{
		letters = 0;
		while (*str)
		{
			while (*str && has_on_charset(*str, charset))
				str++;
			while (*str && !has_on_charset(*str, charset))
			{
				letters++;
				str++;
			}
			arr[pos] = ft_substr(str - letters, 0, letters);
			pos++;
			letters = 0;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	size_t	words;

	if (!str)
		return (NULL);
	words = count_words(str, charset);
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
		return (NULL);
	fill_matrix(str, charset, arr);
	arr[words] = 0;
	return (arr);
}
/*
#include <stdio.h>
int main()
{
	char *str = "eu gos#to de arr,oz";
	char *charset = " #,";
	char **arr = ft_split(str, charset);
	int i = 0;
	while (arr[i])
	{
		printf("%s\n", arr[i]);
		i++;
	}
	return 0;
}*/
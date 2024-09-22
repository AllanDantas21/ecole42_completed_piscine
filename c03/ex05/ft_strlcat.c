/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 01:16:28 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/22 15:20:09 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	len = 0;
	while (dest[len] && len < size)
		len++;
	i = len;
	while (src[len - i] && (len + 1) < size)
	{
		dest[len] = src[len - i];
		len++;
	}
	if (i < size)
		dest[len] = '\0';
	return (i + ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[20] = "Hello";
	char src[] = " World!";
	unsigned int size = sizeof(dest);

	printf("Before ft_strlcat:\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);

	unsigned int result = ft_strlcat(dest, src, size);

	printf("\nAfter ft_strlcat:\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("Result: %u\n", result);

	return 0;
}/**/
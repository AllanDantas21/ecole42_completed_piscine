/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:03:51 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/12 00:27:17 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = ft_strlen(src);
	if (size > 0)
	{
		size -= 1;
		while (*src && size--)
			*dest++ = *src++;
		*dest = '\0';
	}
	return (len);
}
/*
#include <stdio.h>

int main(void)
{
	char src[] = "Hello, world!";
	char dest[20];
	unsigned int len = ft_strlcpy(dest, src, sizeof(dest));
	
	printf("Copied string: %s\n", dest);
	printf("Length of copied string: %u\n", len);
	
	return 0;
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:03:51 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/06 00:41:53 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static unsigned int	ft_strlen(const char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dst, const char *src, unsigned int size)
{
	unsigned int	len;

	len = ft_strlen(src);
	if (size > 0)
	{
		size -= 1;
		while (*src && size--)
			*dst++ = *src++;
		*dst = '\0';
	}
	return (len);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[] = "Hello, world!";
	char dst[20];
	unsigned int len = ft_strlcpy(dst, src, sizeof(dst));
	
	printf("Copied string: %s\n", dst);
	printf("Length of copied string: %u\n", len);
	
	return 0;
}*/
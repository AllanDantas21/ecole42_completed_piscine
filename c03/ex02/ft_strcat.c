/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:10:55 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/19 14:55:48 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	d_len;
	int	i;

	d_len = 0;
	while (dest[d_len] != '\0')
		d_len++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (dest);
}

/*
#include <stdio.h>
int	main()
{
	char dest[] = "aba";
	char src[] = "cate";

	ft_strcat(dest, src);

	printf("%s", dest);
}*/

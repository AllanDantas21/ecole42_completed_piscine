/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:03:56 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/19 14:55:46 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	d_len;

	i = 0;
	d_len = 0;
	while (dest[d_len] != '\0')
		d_len++;
	while (src[i] != '\0' && i < nb)
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

	printf("%s", ft_strncat(dest, src, 1));
}*/

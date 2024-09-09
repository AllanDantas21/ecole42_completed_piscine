/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:18:53 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/09 00:58:14 by aldantas         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*s1;
	char	*s2;
	char	*pos;

	s1 = src;
	s2 = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!s2)
		return (NULL);
	pos = s2;
	while (*s1)
	{
		*s2++ = *s1++;
	}
	*s2 = 0;
	return (pos);
}

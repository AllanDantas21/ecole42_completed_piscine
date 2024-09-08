/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 01:18:53 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/08 01:23:09 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strlen(const char *s)
{
    int	i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char	*ft_strdup(const char *s)
{
	char	*s1;
	char	*s2;
	char	*pos;

	s1 = (char *)s;
	s2 = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
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
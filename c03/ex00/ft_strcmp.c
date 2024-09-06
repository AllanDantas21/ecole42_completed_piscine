/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 10:21:20 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/06 01:15:32 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<unistd.h>
#include<stdio.h>*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_strcmp("abd","abf"));
}*/

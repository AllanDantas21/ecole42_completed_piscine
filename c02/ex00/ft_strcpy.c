/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:31:28 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/06 00:34:26 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<unistd.h>*/
/*#include <stdio.h>*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char ch[10] = "ABACATE";
	char dest[11]; 

	ft_strcpy(dest, ch);

	printf("%s", dest);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 00:26:23 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/12 00:26:52 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_alphanum(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (is_alphanum(str[i]))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int main() {
	char str1[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char str2[] = "hello world";
	char str3[] = "123abc";
	char str4[] = "aBcDeFgHiJkLmNoPqRsTuVwXyZ";
	
	printf("Antes: %s\n", str1);
	ft_strcapitalize(str1);
	printf("Depois: %s\n\n", str1);
	
	printf("Antes: %s\n", str2);
	ft_strcapitalize(str2);
	printf("Depois: %s\n\n", str2);
	
	printf("Antes: %s\n", str3);
	ft_strcapitalize(str3);
	printf("Depois: %s\n\n", str3);
	
	printf("Antes: %s\n", str4);
	ft_strcapitalize(str4);
	printf("Depois: %s\n\n", str4);
	
	return 0;
}*/

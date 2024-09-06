/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 16:27:08 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/06 00:13:17 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 20;
	b = 10;
	div = 30;
	mod = 40;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %d", div, mod);
}*/

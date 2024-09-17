/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 00:18:48 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/17 01:46:57 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

static int	invalid_op(char *op)
{
	if (ft_strlen(op) != 1)
		return (1);
	if (op[0] == '+' || op[0] == '-'
		|| op[0] == '/' || op[0] == '*'
		|| op[0] == '%')
		return (0);
	return (1);
}

static int	div_mod_by_zero(char *op, char *num2)
{
	if (ft_atoi(num2) == 0 && op[0] == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	if (ft_atoi(num2) == 0 && op[0] == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}

static int	find_an_error(int ac, char **av)
{
	if (ac != 4)
	{
		write(1, "Usage: ./a.out N1 \"Op\" N2\n", 26);
		return (1);
	}
	if (invalid_op(av[2]) || div_mod_by_zero(av[2], av[3]))
	{
		write(1, "0", 1);
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int	result;

	if (find_an_error(ac, av))
		return (1);
	result = do_op(ft_atoi(av[1]), *av[2], ft_atoi(av[3]));
	ft_putnbr(result);
	return (0);
}

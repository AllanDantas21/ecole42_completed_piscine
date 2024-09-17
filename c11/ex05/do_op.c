/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:42:37 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/17 01:50:42 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	do_op(int a, char op, int b)
{
	const t_ops	ops[5] = {add, sub, mult, div, mod};
	const char	ops_keys[5] = {'+', '-', '*', '/', '%'};
	int			i;

	i = 0;
	while (i < 5)
	{
		if (op == ops_keys[i])
			return (ops[i](a, b));
	}
	return (0);
}

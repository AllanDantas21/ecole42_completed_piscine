/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 01:28:34 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/17 01:52:08 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

typedef int	(*t_ops)(int, int);

int		do_op(int a, char op, int b);
int		add(int a, int b);
int		sub(int a, int b);
int		mult(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		ft_atoi(char *nptr);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);

#endif
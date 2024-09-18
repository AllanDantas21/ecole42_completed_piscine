/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:15:17 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/18 00:19:16 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

int     ft_atoi(char *nbr);
void	ft_error(char *str);
int		ft_strlen(char *str);
int		open_file(char *file_name);
int     ft_strcmp(char *s1, char *s2);
void	tail_no_option(char *file_name);
void	tail_with_option(char *file_name, int option);

#endif
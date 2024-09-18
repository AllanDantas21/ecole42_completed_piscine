/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:15:17 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/18 00:02:09 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

void	ft_error(char *str);
int		ft_strlen(char *str);
int     ft_strcmp(char *s1, char *s2);
int     count_bytes(char *file_name, int option);
int     ft_atoi(char *nbr);
void	ft_print_bytes(int fd, int first_bytes);

#endif
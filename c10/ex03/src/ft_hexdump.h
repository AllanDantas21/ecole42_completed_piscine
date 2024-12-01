/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 01:42:16 by aldantas          #+#    #+#             */
/*   Updated: 2024/12/01 12:05:06 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEXDUMP_H
# define FT_HEXDUMP_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>

# define BUFFER_SIZE 16

void	ft_hexdump_no_opt(char *file_name, unsigned int size);
void	ft_hexdump_opt(char *file_name, unsigned int size);
int     ft_strcmp(const char *s1, const char *s2);

#endif
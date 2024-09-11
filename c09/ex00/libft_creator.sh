#!/bin/sh
cc="cc"
flags="-Wall -Wextra -Werror"
srcs="ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c"
name="libft.a"

$cc $flags -c $srcs
ar rc $name *.o
rm -f *.o

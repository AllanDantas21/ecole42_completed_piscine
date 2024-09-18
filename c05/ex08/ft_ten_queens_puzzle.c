/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 01:49:41 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/18 02:18:43 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	print_board(int board[10], int col)
{
	int	j;
	int	nb;

	if (col >= 10)
	{
		j = 0;
		while (j < 10)
		{
			nb = board[j] + '0';
			write(1, &nb, 1);
			j++;
		}
		write(1, "\n", 1);
		return ;
	}
}

static int	is_safe(int board[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row
			|| board[i] - i == row - col
			|| board[i] + i == row + col)
			return (0);
		i++;
	}
	return (1);
}

static void	solve_queens(int board[10], int col, int *count)
{
	int	i;

	i = 0;
	if (col == 10)
	{
		print_board(board, col);
		(*count)++;
		return ;
	}
	while (i < 10)
	{
		if (is_safe(board, i, col))
		{
			board[col] = i;
			solve_queens(board, col + 1, count);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < 10)
		board[i++] = 0;
	solve_queens(board, 0, &count);
	return (count);
}
/*
#include <stdio.h>
int main(void)
{
	printf("\nretorno: %d\n", ft_ten_queens_puzzle());
}*/
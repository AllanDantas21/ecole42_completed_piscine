/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 01:49:41 by aldantas          #+#    #+#             */
/*   Updated: 2024/09/08 20:23:16 by aldantas         ###   ########.fr       */
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

static int	solve_queens(int board[10], int col)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (col >= 10)
	{
		print_board(board, col);
		return (1);
	}
	while (i < 10)
	{
		if (is_safe(board, i, col))
		{
			board[col] = i;
			count += solve_queens(board, col + 1);
		}
		i++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	i;

	i = 0;
	while (i < 10)
		board[i++] = 0;
	return (solve_queens(board, 0));
}
/*
int main(void)
{
	return ft_ten_queens_puzzle();
}/**/

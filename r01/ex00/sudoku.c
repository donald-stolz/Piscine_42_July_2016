/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 22:29:57 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/24 22:29:58 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str++, 1);
	}
}

int		fill_sudoku(int puzzle[][9], int row, int col);

int		is_available(int puzzle[][9], int row, int col, int num)
{
	int row_start;
	int col_start;
	int i;

	row_start = (row / 3) * 3;
	col_start = (col / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (puzzle[row][i] == num)
			return (0);
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[row_start + (i % 3)][col_start + (i / 3)] == num)
			return (0);
		++i;
	}
	return (1);
}

int		place_digit(int i, int puzzle[][9], int row, int col)
{
	while (i < 9)
	{
		if (is_available(puzzle, row, col, i + 1))
		{
			puzzle[row][col] = i + 1;
			if ((col + 1) < 9)
			{
				if (fill_sudoku(puzzle, row, col + 1))
					return (1);
				else
					puzzle[row][col] = 0;
			}
			else if ((row + 1) < 9)
			{
				if (fill_sudoku(puzzle, row + 1, 0))
					return (1);
				else
					puzzle[row][col] = 0;
			}
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int		fill_sudoku(int puzzle[][9], int row, int col)
{
	int i;
	int e;

	e = 0;
	if (row < 9 && col < 9)
	{
		if (puzzle[row][col] != 0)
		{
			if ((col + 1) < 9)
				return (fill_sudoku(puzzle, row, col + 1));
			else if ((row + 1) < 9)
				return (fill_sudoku(puzzle, row + 1, 0));
			else
				return (1);
		}
		else
		{
			i = 0;
			e = place_digit(i, puzzle, row, col);
		}
	}
	return (e);
}

void	display(int puzzle[][9])
{
	int i;
	int j;

	i = 1;
	while (i < 10)
	{
		j = 1;
		while (j < 10)
		{
			ft_putchar(puzzle[i - 1][j - 1] + '0');
			if (j != 9)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

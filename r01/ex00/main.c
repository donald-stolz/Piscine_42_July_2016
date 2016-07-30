/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 22:29:08 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/24 22:29:09 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str);

int		fill_sudoku(int puzzle[][9], int row, int col);

int		is_available(int puzzle[][9], int row, int col, int num);

void	display(int puzzle[][9]);

int		*str_to_intarr(char *s);

int		ft_putchar(char c);

int		fill_board(int index, int **board, char **argv, int puzzle[][9]);

int		main(int argc, char **argv)
{
	int **board;
	int puzzle[9][9];
	int index;
	int error;

	index = argc;
	board = (int**)malloc(sizeof(int*) * 9);
	error = fill_board(index, board, argv, puzzle);
	if (error == 0)
	{
		return (0);
	}
	if (fill_sudoku(puzzle, 0, 0))
	{
		display(puzzle);
	}
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (0);
}

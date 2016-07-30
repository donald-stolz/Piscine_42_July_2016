/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzlemaker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabrun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 22:29:38 by mabrun            #+#    #+#             */
/*   Updated: 2016/07/24 22:29:38 by mabrun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		write_puzzle(int puzzle[][9], int index, int **board);

void	ft_putstr(char *str);

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		*str_to_intarr(char *s)
{
	int i;
	int *ar;

	i = 0;
	ar = (int*)malloc(sizeof(int) * 9);
	while (i < 9)
	{
		if (s[i] >= '0' && s[i] <= '9')
			ar[i] = s[i] - '0';
		else if (s[i] == '.')
			ar[i] = 0;
		i++;
	}
	return (ar);
}

int		fill_board(int index, int **board, char **argv, int puzzle[][9])
{
	int i;
	int error;

	i = 1;
	error = 0;
	if (index - 1 == 9)
	{
		while (i < 10)
		{
			board[i - 1] = str_to_intarr(argv[i]);
			i++;
		}
	}
	else
	{
		if (error == 0)
		{
			ft_putstr("Error\n");
			return (0);
		}
	}
	return (write_puzzle(puzzle, index, board));
}

int		write_puzzle(int puzzle[][9], int index, int **board)
{
	int column;
	int row;

	column = 0;
	row = 0;
	if (index - 1 == 9)
	{
		while (row < 9)
		{
			column = 0;
			while (column < 9)
			{
				puzzle[row][column] = board[row][column];
				column++;
			}
			row++;
		}
	}
	return (1);
}

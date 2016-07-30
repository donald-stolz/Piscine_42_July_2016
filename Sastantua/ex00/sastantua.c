/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 09:10:42 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/17 09:10:45 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void	build_door(int nb_line, int *nb_space_start, int *nb_star_start);
void	size_space(int size, int space);
void	line_repeat_floor(int floor);
void	create_floor(int nb_line, int *nb_space_start, int *nb_star_start);

int		ft_putchar(char c)
{
	write(1, &c, 1);
}

void	sastantua(int size)
{
	int j;
	int start_line;
	int start_star;
	int start_space;

	j = 1;
	start_star = 1;
	start_line = 3;
	start_space = (size * (size + 1) + 2 * size);
	while (j < size)
	{
		start_space = start_space - 2;
		create_floor(start_line, &start_space, &start_star);
		start_line++;
		start_star = start_star + 4;
		j++;
	}

}
void	build_door(int nb_line, int *nb_space_start, int *nb_star_start, int i)
{

	while (i < nb_line)
	{
		size_space(*nb_star_start, *nb_space_start);
		*nb_space_start = *nb_space_start - 1;
		*nb_star_start += 2;
		i++;
	}
}
void	line_repeat_floor(int floor)
{
	int i;
	int j;
	int size;

	i = 0;
	j = 3 + floor - 1;
	size = 1;
	while (i < 3 + floor)
	{
		size_space(size, j);
		size += 2;
		i++;
		j--;
	}
}

void	create_floor(int nb_line, int *nb_space_start, int *nb_star_start)
{
	int i;

	i = 0;
	while (i < nb_line -1)
	{
		size_space(*nb_star_start, *nb_space_start);
		*nb_space_start = *nb_space_start - 1;
		*nb_star_start += 2;
		i++;
	}
	build_door(start_line, &start_space, &start_star, i - 1);
}

void	size_space(int size, int space)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < space)
	{
		ft_putchar(' ');
		j++;
	}
	ft_putchar('/');
	while (i < size)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

int		main()
{
	sastantua(5);
}
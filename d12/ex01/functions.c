/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 16:20:57 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/27 16:20:59 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.h"

void	ft_error(int err, char *arg)
{
	if (err == 13)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(arg);
		ft_putstr(": Permission Denied\n");
	}
	if (err == 21)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(arg);
		ft_putstr(": Is a directory\n");
	}
	else
	{
		ft_putstr("ft_cat: ");
		ft_putstr(arg);
		ft_putstr(": No such file or directory\n");
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	disp_stdin(void)
{
	char	buff;

	while (read(0, &buff, 1) != 0)
	{
		write(1, &buff, 1);
	}
}

void	disp_file(int argc, char *argv[])
{
	char	buff;
	int		fd;
	int		i;
	int		err;

	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		err = errno;
		ft_error(err, argv[i]);
		if (fd >= 0)
		{
			while (read(fd, &buff, 1) != 0)
			{
				write(1, &buff, 1);
			}
		}
		else
		{
			ft_error(err, argv[i]);
		}
		close(fd);
		i++;
	}
}

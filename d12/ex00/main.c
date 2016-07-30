/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 12:27:32 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/27 12:27:34 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display.h"

int	main(int argc, char const *argv[])
{
	int		inpt;
	int		ret;
	char	buff[BUFF_SIZE + 1];

	inpt = 0;
	if (argc == 1)
	{
		ft_putstr("File name missing.");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.");
		return (0);
	}
	inpt = open(argv[1], O_RDONLY);
	while ((ret = read(inpt, buff, BUFF_SIZE)))
	{
		buff[ret] = '\0';
		ft_putstr(buff);
	}
	close(inpt);
	return (0);
}

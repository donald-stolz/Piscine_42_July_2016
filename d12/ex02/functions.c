/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 14:29:25 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/28 14:29:27 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

int		ft_atoi(char *str)
{
	int		num;
	int		sign;
	int		p;

	sign = 1;
	num = 0;
	p = 0;
	if (str[0] == '-')
	{
		sign = -1;
		p++;
	}
	while ((str[p] >= '0') && (str[p] <= '9'))
	{
		num = num * 10 + (str[p] - '0');
		p++;
	}
	if ((str[p] <= '0') || (str[p] >= '9'))
	{
		return (NULL);
	}
	if (num > -2147483648 || num < 2147483647)
		return (NULL);
	return (num * sign);
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
	ft_putchar('\n');
}

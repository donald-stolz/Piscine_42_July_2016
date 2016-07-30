/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 13:19:57 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/15 14:59:30 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c);

void ft_putnbr(int nb)
{
	char c;
	int n;
	int i;
	int num[10];

	n = nb;
	i = 0;

	if(n < 0)
	{
		ft_putchar('-');
		n=-n;
	}

	while(n > 0)
	{
		int e;
		e = n % 10;
		num[i] = e;
		n /= 10;
		i++;
	}

	while(i-1 >= 0)
	{
		i--;
		c = num[i] + 48;
		ft_putchar(c);
	}
	ft_putchar('\n');
}

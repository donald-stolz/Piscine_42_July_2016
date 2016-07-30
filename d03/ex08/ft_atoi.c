/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 20:19:49 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/14 20:19:55 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
	if (num > -2147483648 || num < 2147483647)
	return (num * sign);
}

int	main(void)
{
	char b[] = "-2147483649";
	int i = ft_atoi(b);
	printf("%d\n", i);
	return 0;
}
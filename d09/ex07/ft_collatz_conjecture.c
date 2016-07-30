/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 09:49:28 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/22 09:49:30 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned	int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
	{
		return (0);
	}
	else if (base % 2 == 0)
	{
		return (1 + ft_collatz_conjecture(base / 2));
	}
	else
	{
		return (1 + ft_collatz_conjecture(3 * base + 1));
	}
}

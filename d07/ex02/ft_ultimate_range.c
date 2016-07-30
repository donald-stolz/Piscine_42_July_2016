/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 09:43:03 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/20 09:43:06 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	range = (int**)malloc(sizeof(int*) * (max - min));
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (max - min);
}

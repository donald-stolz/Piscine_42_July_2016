/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 09:33:25 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/20 09:33:28 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *i;
	int j;

	j = 0;
	if (min >= max)
	{
		return (0);
	}
	i = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		i[j] = min;
		min++;
		j++;
	}
	return (i);
}

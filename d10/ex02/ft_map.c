/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 14:32:13 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/25 14:32:17 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*str;
	int	i;

	i = 0;
	str = (int*)malloc(sizeof(*tab) * length);
	while (i < length)
	{
		str[i] = f(tab[i]);
		i++;
	}
	return (str);
}

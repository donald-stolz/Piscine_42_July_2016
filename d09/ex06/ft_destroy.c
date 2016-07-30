/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:30:33 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/21 22:30:35 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int	i;
	int	q;

	i = 0;
	q = 0;
	while (factory[i])
	{
		while (factory[i][q])
		{
			free(factory[i][q]);
			q++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}

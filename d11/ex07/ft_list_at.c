/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 22:01:33 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/26 22:01:34 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*tmp;

	tmp = begin_list;
	while (nbr > 1)
	{
		if (!tmp)
		{
			return (0);
		}
		tmp = tmp->net;
		nbr--;
	}
	return (tmp);
}

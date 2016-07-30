/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 21:22:21 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/26 21:22:23 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

	tmp = begin_list;
	if (tmp)
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		return (tmp);
	}
	return (tmp);
}

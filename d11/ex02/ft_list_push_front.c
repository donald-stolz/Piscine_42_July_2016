/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 21:10:55 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/26 21:10:57 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*var;

	if (*begin_list)
	{
		var = ft_create_elem(data);
		var->next = *begin_list;
		*begin_list = var;
	}
	else
	{
		*begin_list = ft_create_elem(data);
	}
}

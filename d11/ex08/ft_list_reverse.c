/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 22:04:15 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/26 22:04:17 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*list;
	t_list	*tmp1;
	t_list	*tmp2;

	list = *begin_list;
	if (!list || !(list->next))
	{
		return ;
	}
	tmp1 = list->next;
	tmp2 = tmp1->next;
	list->next = 0;
	tmp1->next = list;
	while (tmp2)
	{
		list = tmp1;
		tmp1 = tmp2;
		tmp2 = tmp2->next;
		tmp1->next = list;
	}
	*begin_list = tmp1;
}

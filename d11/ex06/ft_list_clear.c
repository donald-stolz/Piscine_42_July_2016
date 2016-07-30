/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 21:57:43 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/26 21:57:45 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*list;

	list = *begin_list;
	while (list)
	{
		if (list->next)
		{
			tmp = list->next;
		}
		else
		{
			tmp = 0;
		}
		free(list);
		list = tmp;
	}
}

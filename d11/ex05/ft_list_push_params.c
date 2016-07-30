/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 21:41:11 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/26 21:41:13 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*tmp;
	t_list	*list;

	i = 1;
	list = NULL;
	while (i < ac)
	{
		tmp = ft_create_elem(av[i]);
		tmp->next = list;
		list = tmp;
		i++;
	}
	return (list);
}

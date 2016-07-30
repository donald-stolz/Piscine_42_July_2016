/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 08:52:55 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/22 08:52:57 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], i);
		i++;
	}
}

void		close_door(t_door *door)
{
	ft_putstr("Door closing...");
	door->state = CLOSE;
}

void		open_door(t_door *door)
{
	ft_putstr("Door opening...");
	door->state = OPEN;
}

t_ft_bool	is_door_open(t_door *door)
{
	ft_putstr("Door is open ?");
	if (state == OPEN)
	{
		return (TRUE);
	}
	return (FALSE);
}

t_ft_bool	is_door_close(t_door *door)
{
	ft_putstr("Door is close ?");
	if (state == OPEN)
	{
		return (FALSE);
	}
	return (TRUE);
}

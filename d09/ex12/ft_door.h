/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/22 08:53:04 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/22 08:53:09 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H
# include <unistd.h>
# include <string.h>

# define OPEN 1
# define TRUE 1
# define CLOSE 0
# define FALSE 0
# define EXIT_SUCCESS 0

typedef	int	t_ft_bool;

typedef	struct	s_door
{
	int	state;
}				t_door;
void			close_door(t_door *door);
void			open_door(t_door *door);
t_ft_bool		is_door_open(t_door *door);
t_ft_bool		is_door_close(t_door *door);
#endif

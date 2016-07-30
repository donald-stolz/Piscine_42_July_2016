/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 21:15:53 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/26 21:15:59 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

//need prototypes for creat elment and other functions
typedef	struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;
#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 13:39:11 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/28 13:39:13 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

# include <unistd.h>

typedef struct 		s_btree
{
	struct  s_btree		*parent;
	struct  s_btree		*right;
	struct  s_btree		*left;
	void				data;
}					t_btree;
#endif
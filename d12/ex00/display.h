/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 12:27:40 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/27 12:27:43 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISPLAY_H
# define DISPLAY_H

# include <unistd.h>
# include <fcntl.h>

# define BUFF_SIZE 4096

void	ft_putchar(char c);
void	ft_putstr(char *str);
#endif

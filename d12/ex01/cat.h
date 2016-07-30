/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 14:16:50 by dstolz            #+#    #+#             */
/*   Updated: 2016/07/27 14:16:52 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>

# define BUFF_SIZE 4096

void	ft_putstr(char *str);
void	ft_putchar(char c);
void	disp_stdin(void);
void	disp_file(int argc, char *argv[]);
// void	ft_error(int errno, char *arg);
#endif

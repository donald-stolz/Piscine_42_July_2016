# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dstolz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/27 10:35:26 by dstolz            #+#    #+#              #
#    Updated: 2016/07/27 10:35:27 by dstolz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

NAME = ft_display_file

SRC = main.c functions.c
OBJ =  main.o functions.o

HEADER = display.h

all: comp

comp:
	$(CC) $(CFLAGS) $(SRC)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

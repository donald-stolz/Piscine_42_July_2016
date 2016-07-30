# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dstolz <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/27 14:15:56 by dstolz            #+#    #+#              #
#    Updated: 2016/07/27 14:16:01 by dstolz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -c -Wall -Wextra -Werror

NAME = ft_cat

SRC = main.c functions.c
OBJ =  main.o functions.o

HEADER = cat.h

all: comp

comp:
	$(CC) $(CFLAGS) $(SRC)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

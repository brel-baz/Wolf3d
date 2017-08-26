# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brel-baz <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/26 10:29:59 by brel-baz          #+#    #+#              #
#    Updated: 2017/06/07 11:03:22 by brel-baz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = wolf3d
PATH_SRC = ./
PATH_OBJ = ./
PATH_INC = ./libft

CC = gcc
CFLAGS = -Wall -Wextra -Werror

HEAD = wolf3d.h

SRC =	main.c \
		hook.c \
		hook2.c \
		init.c \
		set_pixel.c \
		calc.c\
		draw.c\
		draw2.c\
		utils.c

OBJ = $(patsubst %.c,%.o,$(addprefix $(PATH_SRC), $(SRC)))


all: $(NAME)

$(NAME): $(OBJ) $(HEAD)
	make -C libft/
	$(CC) $(CFLAGS) -I $(PATH_INC) -c $(SRC)
	$(CC) -o $(NAME) $(OBJ) -lm -L libft/ -lft -lmlx -framework OpenGL -framework AppKit

clean:
	make -C libft/ clean
	/bin/rm -f $(OBJ)

fclean: clean
	make -C libft/ fclean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean

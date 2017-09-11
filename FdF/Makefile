# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amkhuma <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/11 14:31:34 by amkhuma           #+#    #+#              #
#    Updated: 2017/09/11 14:31:41 by amkhuma          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

CC = gcc

CFLAGS = -o $(NAME) -I includes/ -I libft/ -lmlx -framework OpenGL -framework AppKit

CFILES = source/fdfread.c source/fdfdraw.c source/get_next_line.c source/fdfmain.c source/fdfkeys.c libft/libft.a

$(NAME):
		$(MAKE) -C libft all
			$(CC) $(CFILES) $(CFLAGS)

all: $(NAME)

clean:
		$(MAKE) -C libft clean

fclean:
		$(MAKE) -C libft fclean
			rm -rf $(NAME)

re: fclean all

run: re
		./$(NAME) maps/std/42.fdf
.PHONY: run re fclean clean all

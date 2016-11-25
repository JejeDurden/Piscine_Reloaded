# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 17:35:40 by jdesmare          #+#    #+#              #
#    Updated: 2016/11/03 10:11:53 by jdesmare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = display_file.c
FLAG = -c -Wall -Wextra -Werror
OBJ = display_file.o

all: $(NAME)

$(NAME):
		gcc $(FLAG) $(SRC)
		gcc -o $(NAME) $(OBJ)
clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
re: fclean all clean

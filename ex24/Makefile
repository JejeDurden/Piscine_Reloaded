# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdesmare <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/02 17:35:40 by jdesmare          #+#    #+#              #
#    Updated: 2016/11/02 20:06:35 by jdesmare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ./srcs/
HEADER = ./includes/
FLAG = -Wall -Wextra -Werror
SRC = $(SRCS)ft_putchar.c $(SRCS)ft_putstr.c $(SRCS)ft_strcmp.c \
 		$(SRCS)ft_strlen.c $(SRCS)ft_swap.c
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
		gcc $(FLAG) -c $(SRC)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
clean:
		rm -f $(OBJ)
fclean: clean
		rm -f $(NAME)
re: fclean all clean

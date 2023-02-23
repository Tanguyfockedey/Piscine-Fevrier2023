# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 14:05:26 by tafocked          #+#    #+#              #
#    Updated: 2023/02/23 18:07:15 by tafocked         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES =	srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

HEAD = includes

CC = cc

CFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -I $(HEAD)

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -ru $(NAME) $(OBJ)

re: fclean all

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean
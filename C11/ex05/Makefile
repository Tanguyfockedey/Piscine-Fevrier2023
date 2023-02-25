# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 14:05:26 by tafocked          #+#    #+#              #
#    Updated: 2023/02/25 15:02:57 by tafocked         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG = do-op

LIB = ft.a

FILES =	srcs/ft_atoi.c \
		srcs/ft_putnbr.c \
		srcs/ft_operators.c

HEAD = includes

CC = cc

CFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -I $(HEAD)

OBJ = $(FILES:.c=.o)

all: $(PROG) 

$(PROG):$(LIB)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(PROG).c -o $(PROG) $(LIB)

$(LIB): $(OBJ)
	ar -ru $(LIB) $(OBJ)

re: fclean all

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(LIB)
	rm -f $(PROG)

.PHONY: all re clean fclean
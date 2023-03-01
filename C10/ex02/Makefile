# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 14:11:04 by tafocked          #+#    #+#              #
#    Updated: 2023/03/01 20:08:01 by tafocked         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG = ft_tail

FILES = ft_tail.c \
		srcs/ft_atoi.c

HEAD = includes

CC = cc

CFLAGS = -Wall -Wextra -Werror

CPPFLAGS = -I $(HEAD)

OBJ = $(FILES:.c=.o)

all: $(PROG) 

$(PROG): $(OBJ)

re: fclean all

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(PROG)

.PHONY: all re clean fclean
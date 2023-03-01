# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tafocked <tafocked@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/01 14:11:04 by tafocked          #+#    #+#              #
#    Updated: 2023/03/01 14:11:48 by tafocked         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROG = ft_cat

FILES = ft_cat.c

CC = cc

CFLAGS = -Wall -Wextra -Werror

OBJ = $(FILES:.c=.o)

all: $(PROG) 

$(PROG): $(OBJ)

re: fclean all

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -f $(PROG)

.PHONY: all re clean fclean
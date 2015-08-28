# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpillot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/19 02:21:26 by mpillot           #+#    #+#              #
#    Updated: 2015/08/23 23:38:00 by qograbek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
NAME1 = colle-00
NAME2 = colle-01
NAME3 = colle-02
NAME4 = colle-03
NAME5 = colle-04

SRCS = srcs/colle02/colle-2.c srcs/colle02/ft_putchar.c srcs/colle02/ft_putnbr.c srcs/colle02/main.c
SRCS1 =	srcs/colle00/colle00_0/colle00.c srcs/colle00/colle00_0/maincolle00.c
SRCS2 = srcs/colle00/colle00_1/colle01.c srcs/colle00/colle00_1/maincolle00.c
SRCS3 = srcs/colle00/colle00_2/colle02.c srcs/colle00/colle00_2/maincolle00.c
SRCS4 = srcs/colle00/colle00_3/colle03.c srcs/colle00/colle00_3/maincolle00.c
SRCS5 = srcs/colle00/colle00_4/colle04.c srcs/colle00/colle00_4/maincolle00.c

INCLUDES = includes/colle-2.h

all: $(NAME)

$(NAME) :
	gcc -Wall -Werror -Wextra $(SRCS) -o $(NAME) -I $(INCLUDES)
	gcc -Wall -Werror -Wextra $(SRCS1) -o $(NAME1) -I $(INCLUDES)
	gcc -Wall -Werror -Wextra $(SRCS2) -o $(NAME2) -I $(INCLUDES)
	gcc -Wall -Werror -Wextra $(SRCS3) -o $(NAME3) -I $(INCLUDES)
	gcc -Wall -Werror -Wextra $(SRCS4) -o $(NAME4) -I $(INCLUDES)
	gcc -Wall -Werror -Wextra $(SRCS5) -o $(NAME5) -I $(INCLUDES)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

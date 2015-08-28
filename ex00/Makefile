# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpillot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/19 02:21:26 by mpillot           #+#    #+#              #
#    Updated: 2015/08/23 16:01:35 by mpillot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRCS =	srcs/colle02.c\
		srcs/ft_putchar.c\
	   	srcs/ft_putnbr.c\
		srcs/colle00.c\
		srcs/colle02.c\

INCLUDES = includes/

all: $(NAME)

$(NAME) :
	gcc -Wall -Werror -Wextra $(SRCS) -o $(NAME) -I $(INCLUDES)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

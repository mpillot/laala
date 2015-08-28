# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpillot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/08/19 02:21:26 by mpillot           #+#    #+#              #
#    Updated: 2015/08/19 07:18:29 by mpillot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_strlen.c \
	   srcs/ft_swap.c \

OBJ = ft_putchar.o \
	   ft_putstr.o \
	   ft_strcmp.o \
	   ft_strlen.o \
	   ft_swap.o \

INCLUDES = includes/

all: $(NAME)

$(NAME) :
	gcc -I$(INCLUDES) -c $(SRCS)
	ar rc $(NAME) $(OBJ)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: m-alaoui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 14:47:31 by m-alaoui          #+#    #+#              #
#    Updated: 2022/10/23 21:33:04 by m-alaoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=CC
FLAGS= -Wall -Werror -Wextra -I include/ft_printf.h 
AR=ar cr
RM=rm -rf
FILES= src/ft_convert_hex src/ft_putchar src/ft_putnbr \
			src/ft_putptr src/ft_putstr src/ft_putunsignednbr \
			src/ft_printf 
INCLUDE = include/
SRC = src/	   
OBJ=$(FILES:=.o)
NAME=libftprintf.a

.PHONY: all bonus clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c include/ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(BOBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aprenafe <aprenafe@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 12:19:04 by aprenafe          #+#    #+#              #
#    Updated: 2024/09/11 15:57:13 by aprenafe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
INCLUDE = push_swap.h Makefile

SRC = push_swap.c \
	  parsing.c \
	  stack_utils.c	\
	  fill_stack.c \
	  swap.c \
	  push.c \
	  reverse.c \
	  sort_utils.c \
	  moves.c \
	  sort.c \
	  rotate.c	  

OBJ := $(SRC:.c=.o)


all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME) 

re: fclean all

.PHONY: all clean fclean 
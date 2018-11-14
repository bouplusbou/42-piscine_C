# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboucher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/16 22:30:03 by bboucher          #+#    #+#              #
#    Updated: 2018/09/17 16:13:25 by bboucher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

IDIR = includes
_INC = eval_expr.h
INC = $(patsubst %,$(IDIR)/%,$(_INC))

SDIR = srcs
_SRC = calcul.c \
	   do_op.c \
	   ft_atoi.c \
	   ft_putchar.c \
	   ft_putnbr.c \
	   ft_strcmp.c \
	   ft_strdup.c \
	   ft_strlen.c \
	   main.c \
	   operations.c \
	   parse.c \
	   polish.c \
	   polish2.c \
	   stack.c
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror
OPTS = -o $(NAME) -I$(IDIR)

all: $(NAME)

$(NAME): $(OBJ)
		@gcc $(FLAGS) $(OPTS) $(SRC)

$(OBJ): $(SRC)
		@gcc -c -I$(IDIR) $(SRC)

clean:
		@/bin/rm -f $(OBJ)

fclean: clean
		@/bin/rm -f $(NAME)

re: clean all

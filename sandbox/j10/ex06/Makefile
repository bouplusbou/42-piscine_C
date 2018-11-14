# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboucher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 13:53:48 by bboucher          #+#    #+#              #
#    Updated: 2018/09/18 19:26:02 by bboucher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

IDIR = includes

SDIR = srcs
_SRC = main.c \
	   operations.c \
	   is_error.c \
	   ft_putchar.c \
	   ft_putnbr.c \
	   ft_putstr.c \
	   ft_strcmp.c \
	   ft_atoi.c
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
		gcc -c $(FLAGS) -I$(IDIR) $(SRC)
		gcc $(FLAGS) -o $(NAME) $(OBJ)

clean:
		/bin/rm -f $(OBJ)

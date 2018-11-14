# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bboucher <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/12 11:32:27 by bboucher          #+#    #+#              #
#    Updated: 2018/09/18 10:31:12 by bboucher         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

IDIR = includes

SDIR = srcs
_SRC = ft_putchar.c \
	   ft_putstr.c \
	   ft_strcmp.c \
	   ft_strlen.c \
	   ft_swap.c
SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I$(IDIR) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean : clean
	/bin/rm -f $(NAME)

re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 16:16:51 by tcosta-d          #+#    #+#              #
#    Updated: 2023/05/29 16:17:32 by tcosta-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = src/ft_printf.c src/ft_putchars.c src/ft_putdigits.c \

OBJ = $(SRC:.c=.o)

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJ)
		ar rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
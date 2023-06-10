# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcosta-d < tcosta-d@student.42porto.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/29 16:16:51 by tcosta-d          #+#    #+#              #
#    Updated: 2023/06/10 16:38:35 by tcosta-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = src/ft_printf.c src/ft_putchars.c src/ft_putdigits.c \

OBJ = $(SRC:.c=.o)

INCLUDES = inc/libftprintf.h

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJ)
		make -C libft
		cp libft/libft.a $(NAME)
		ar rcs $(NAME) $(OBJ)

all:	$(NAME)

clean:
		make clean -C libft
		$(RM) $(OBJ)

fclean:	clean
		make fclean -C libft
		$(RM) $(NAME)

tclean: clean
		$(RM) teste

re:	fclean all

teste:	$(NAME)
		$(CC) $(CFLAGS) $(INCLUDE) -o teste main.c $(NAME)

.PHONY: all clean fclean re
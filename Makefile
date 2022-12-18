# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 16:40:53 by vmiseiki          #+#    #+#              #
#    Updated: 2021/07/27 11:37:05 by vmiseiki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ft_printf.h

COMPILER = gcc

CFLAGS = -Wall -Wextra -Werror -c

LIBFT_PATH =./Libft/

MAKE = make

SRC = ft_putnbr.c\
ft_putchar.c\
ft_putstr.c\
ft_printf.c\
ft_putstr.c\
ft_print_int.c\
ft_print_unsigned.c\
ft_rev_str.c\
ft_convert_base.c\
ft_print_hex.c\
ft_print_ptr.c

OBJ = $(SRC:.c=.o)

LIB_OBJ = $(LIBFT_PATH:.c=.o)

all: lib_make $(NAME)

$(NAME): $(OBJ)
	ar cr $(NAME) $(OBJ) $(LIBFT_PATH)/*.o

lib_make:
	$(MAKE) -C Libft/

clean:
	rm -f $(OBJ) $(LIBFT_PATH)/*.o

fclean: clean
	rm -f $(NAME) $(LIBFT_PATH)/*.o $(LIBFT_PATH)/*.a

re: fclean all
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
HEADER = includes

LIBFT_PATH = libft/
LIBFT_HEADER = $(LIBFT_PATH)includes
LIBFT = $(LIBFT_PATH)libft.a

OBJ_DIR = obj/
SRC_DIR = src/
UTILS_DIR = utils/

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c -I $(HEADER) -I $(LIBFT_HEADER)

MAKE = make -C
AR = ar -crs
RM = rm -f 

SRC_FILES = ft_printf.c			ft_print_int.c 	ft_print_unsigned.c \
						ft_print_hex.c	ft_print_ptr.c	

UTILS_FILES = ft_putnbr.c		ft_putchar.c		ft_putstr.c

OBJ := $(addprefix $(OBJ_DIR), $(notdir $(SRC_FILES:.c=.o)))
OBJ += $(addprefix $(OBJ_DIR), $(notdir $(UTILS_FILES:.c=.o)))

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ_DIR) $(OBJ)
	@cp $(LIBFT) ./
	@$(AR) $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Printf compiled!"

$(LIBFT):
	@$(MAKE) $(LIBFT_PATH)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@echo "Compiling: $(notdir $<)"
	@$(CC) $(CFLAGS) $< -o $@

$(OBJ_DIR)%.o: $(UTILS_DIR)%.c
	@echo "Compiling: $(notdir $<)"
	@$(CC) $(CFLAGS) $< -o $@

clean:
	@$(MAKE) $(LIBFT_PATH) clean
	@$(RM) -r $(OBJ_DIR)
	@echo "Printf objects files cleaned!"

fclean: clean
	@$(MAKE) $(LIBFT_PATH) fclean
	@$(RM) *.a
	@echo "Printf executable files cleaned!"



re: fclean all
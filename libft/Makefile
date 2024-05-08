
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 16:40:53 by vmiseiki          #+#    #+#              #
#    Updated: 2023/02/01 21:08:37 by vmiseiki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = includes

OBJ_DIR	=	obj/
SRC_DIR = src/

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c -I $(HEADER)

AR = ar -crs
RM = rm -f 

SRC_FILES = ft_atoi.c				ft_isalnum.c	ft_isdigit.c	ft_lstnew.c		ft_memcmp.c			ft_memset.c \
						ft_putnbr_fd.c	ft_strchr.c		ft_strjoin.c	ft_strlen.c		ft_strnstr.c		ft_substr.c \
						ft_bzero.c			ft_isalpha.c	ft_isprint.c	ft_memcpy.c		ft_putchar_fd.c	ft_putstr_fd.c \
						ft_strdup.c			ft_strlcat.c	ft_strmapi.c	ft_strrchr.c	ft_tolower.c		ft_calloc.c \
						ft_isascii.c		ft_itoa.c			ft_memchr.c		ft_memmove.c	ft_putendl_fd.c	ft_split.c \
						ft_striteri.c		ft_strlcpy.c	ft_strncmp.c	ft_strtrim.c	ft_toupper.c \


BONUS_FILES = ft_lstnew.c			ft_lstadd_front.c		ft_lstsize.c 	ft_lstlast.c	ft_lstadd_back.c \
							ft_lstdelone.c	ft_lstclear.c				ft_lstiter.c	ft_lstmap.c	\

OBJ := $(addprefix $(OBJ_DIR), $(notdir $(SRC_FILES:.c=.o)))
BONUS_OBJ := $(addprefix $(OBJ_DIR), $(notdir $(BONUS_FILES:.c=.o)))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Libft compiled!"

bonus: $(BONUS_OBJ)
	@$(AR) $(NAME) $(BONUS_OBJ)
	@echo "Libft Bonus compiled!"

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@echo "Compiling: $(notdir $<)"
	@$(CC) $(CFLAGS) $< -o $@ 

clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "Libft objects files cleaned!"

fclean: clean
	@$(RM) $(NAME)
	@echo "Libft executable files cleaned!"

re: fclean all

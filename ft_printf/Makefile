# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 09:38:35 by kakahuate         #+#    #+#              #
#    Updated: 2025/05/08 13:36:33 by kakahuate        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name of the library
NAME = libftprintf.a

#Compiler and compilation flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Header file
INCLUDE = ft_printf.h

#Directory of libft library
LIBFT_DIR = libft

#Source files and Object files
SRC = ft_prinft.c
OBJ = $(SRC:.o=.c)

#File library libft.a
LIBFT_OBJ = $(LIBFT_DIR)/libft.a

#Linking files, create library and flags
AR = ar
ARFLAGS = rcs

#Clean files generaded after compilation
RM = rm -f

#"Phony targets" indicates that the rules listed are not files
.PHONY: all clean fclean re

#Rules: Dependencies
#		comands

all: $(NAME)

$(NAME) : $(OBJ) $(LIBFT_OBJ)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

$(LIBFT_OBJ):
	make -C $(LIBFT_DIR)	
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 09:38:35 by kakahuate         #+#    #+#              #
#    Updated: 2025/05/08 17:29:32 by kakahuate        ###   ########.fr        #
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

#Defines the 'all' target, which depends on the $(NAME)
#target (libftprintf.a)
all: $(NAME)

#Defines the rule to create the library.
#It depends on the object file and the libft library
$(NAME) : $(OBJ) $(LIBFT_OBJ)
	$(AR) $(ARFLAGS) $@ $^

#Defines a generic rule to create object files from source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Defines the 'clean' target to remove object files
clean:
	$(RM) $(OBJ)

#Defines the 'fclean' target, which depends on the 'clean' target
fclean: clean
	$(RM) $(NAME)

#Defines the 're' target to recompile the entire project.
re: fclean all

#Defines a rule to ensure the libft library is built
#Command to change the directory to $(LIBFT_DIR) and 
#run the 'make' command there to build libft.a
$(LIBFT_OBJ):
	make -C $(LIBFT_DIR)	
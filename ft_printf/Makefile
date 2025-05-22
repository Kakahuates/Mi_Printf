# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 09:38:35 by kakahuate         #+#    #+#              #
#    Updated: 2025/05/22 16:57:17 by kakahuate        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name of the library
NAME = libftprintf.a

#Compiler and compilation flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Header file includes
INCLUDES = -I include -I libft

#Directories
SRC_DIR = SRC
OBJ_DIR = OBJ
LIBFT_DIR = libft

#Source files
SRCS =	$(SRC_DIR)/ft_printf.c			 	\
		$(SRC_DIR)/eval_format.c			\
		$(SRC_DIR)/formats/print_char.c		\
		$(SRC_DIR)/formats/print_string.c	\
		$(SRC_DIR)/formats/print_number.c	\
		$(SRC_DIR)/formats/print_unsigned.c	\
		$(SRC_DIR)/formats/print_pointer.c	\
		$(SRC_DIR)/formats/print_percent.c	\
		$(SRC_DIR)/utils/ft_u_itoa.c		\
		$(SRC_DIR)/utils/ft_ultoa.c			\
		$(SRC_DIR)/utils/ft_utoa_base.c

#Object files
OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

#libft --static library
LIBFT_OBJ = $(LIBFT_DIR)/libft.a

#Linking files, archiver
AR = ar
ARFLAGS = rcs

#Clean command
RM = rm -f

#"Phony targets" indicates that the rules listed are not files
.PHONY: all clean fclean re

#Rules: Dependencies
#		comands

#Defines the 'all' target, which depends on the $(NAME)
#target (libftprintf.a)
#Default target
all: $(NAME)

#Build main printf library
$(NAME) : $(OBJS) $(LIBFT_OBJ)
	$(AR) $(ARFLAGS) $@ $^

#Compile each .c to .o into OBJ/
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

#Build libft if needed
$(LIBFT_OBJ): 
	$(MAKE) -C $(LIBFT_DIR)

#Remove object files
clean:
	$(RM) $(OBJS)
	@-rm -rf $(OBJ_DIR)

#Remove all generated files
fclean: clean
	$(RM) $(NAME)

#Recompile from scratch
re: fclean all
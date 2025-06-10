# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksanchez <ksanchez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 09:38:35 by kakahuate         #+#    #+#              #
#    Updated: 2025/06/10 13:25:23 by ksanchez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Name of the library
NAME = libftprintf.a

#Compiler and compilation flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Clean command
RM = rm -f

#Linking files, archiver
AR = ar
ARFLAGS = rcs

#Header file includes
INCLUDES = -I include -I libft

#Directories
SRC_DIR = SRC
OBJ_DIR = OBJ
LIBFT_DIR = libft

#libft --static library
LIBFT_A = $(LIBFT_DIR)/libft.a

#Source files
SRCS_CORE =	ft_printf.c	\
		eval_format.c
SRCS_FORMATS =	FORMATS/print_char.c	\
		FORMATS/print_number.c	\
		FORMATS/print_string.c	\
		FORMATS/print_unsigned.c\
		FORMATS/print_pointer.c	\
		FORMATS/print_percent.c	\
		FORMATS/print_hex.c
SRCS_UTILS =	UTILS/ft_u_itoa.c	\
		UTILS/ft_utoa_base.c
		
#full paths to source files
ALL_SRCS_RELATIVE = $(SRCS_CORE) $(SRCS_FORMATS) $(SRCS_UTILS)

#list of full paths to source files
ALL_SRCS_FULL_PATH = $(addprefix $(SRC_DIR)/, $(ALL_SRCS_RELATIVE))
			
#Object files, converts SRC->OBJ with a complete rute in OBJ_DIR
OBJS = $(addprefix $(OBJ_DIR)/, $(ALL_SRCS_RELATIVE:.c=.o))

#"Phony targets" indicates that the rules listed are not files
.PHONY: all clean fclean re

#Default target
all: $(NAME)

#Build main printf library
$(NAME) : $(OBJS) $(LIBFT_A)
		@cp $(LIBFT_A) $(NAME)
		$(AR) $(ARFLAGS) $@ $^

#Compile each .c to .o into OBJ/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR)/FORMATS/%.o: $(SRC_DIR)/FORMATS/%.c
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR)/UTILS/%.o: $(SRC_DIR)/UTILS/%.c
		@mkdir -p $(dir $@)
		$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

#Build libft if needed
$(LIBFT_A):
	$(MAKE) -C $(LIBFT_DIR)

#Remove object files
clean:
	$(RM) $(OBJS)
	$(RM) -r $(OBJ_DIR)
	$(MAKE) -C $(LIBFT_DIR) clean

#Remove all generated files
fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

#Recompile from scratch
re: fclean all

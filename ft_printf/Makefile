# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kakahuate <kakahuate@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/08 09:38:35 by kakahuate         #+#    #+#              #
#    Updated: 2025/05/23 13:03:28 by kakahuate        ###   ########.fr        #
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
SRCS_FORMATS =	print_char.c	\
		print_number.c	\
		print_string.c	\
		print_unsigned.c\
		print_pointer.c	\
		print_hex.c	\
		print_percent.c
SRCS_UTILS =	ft_u_itoa.c	\
		ft_ultoa.c	\
		ft_utoa_base.c
		
#full paths to source files
ALL_SRCS = $(addprefix $(SRC_DIR)/, $(SRCS_CORE)) \
		$(addprefix $(SRC_DIR)/FORMATS/, $(SRCS_FORMATS)) \
		$(addprefix $(SRC_DIR)/UTILS/, $(SRCS_UTILS))
			
#Object files, converts SRC->OBJ with a complete rute in OBJ_DIR
OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(ALL_SRCS:.c=.o)))

# DEBUGGING LINES - BORRAR DESPUÉS DE SOLUCIONAR
$(info DEBUG: ALL_SRCS = $(ALL_SRCS))
$(info DEBUG: OBJS = $(OBJS))
# FIN DEBUGGING LINES

#"Phony targets" indicates that the rules listed are not files
.PHONY: all clean fclean re

#Default target
all: $(NAME)

#Build main printf library
$(NAME) : $(OBJS) $(LIBFT_A)
		$(RM) $(NAME)
		@mkdir -p $(OBJ_DIR)/temp_libft_objs
		@cd $(OBJ_DIR)/temp_libft_objs && $(AR) x ../../$(LIBFT_A)
		$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(OBJ_DIR)/temp_libft_objs/*.o
		@rm -rf $(OBJ_DIR)/temp_libft_objs
		@ranlib $(NAME) 

#Compile each .c to .o into OBJ/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/FORMATS/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/UTILS/%.c
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

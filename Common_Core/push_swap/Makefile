# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 18:24:21 by aeuflauz          #+#    #+#              #
#    Updated: 2024/10/15 15:25:08 by aeuflauz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of library
NAME = libpushswap.a

# Compiler
CC = @cc

# Make command
MAKE = @make

# Shell commands
CP = @cp
MV = @mv
RM = @rm -rf
AR = @ar -rcs
MKDIR = @mkdir -p

# Flags to compile
FLAGS = -Wall -Wextra -Werror -Iheader

# Directories containing the files
DIR = .
SRC_DIR = src
OBJ_DIR = obj
LIBFT = libft

# C files to be compiled into objects
CFILES = push_swap.c

# Rule to generate object files from file list
OFILES = $(CFILES:%.c=$(OBJ_DIR)/%.o)

# Compile .c files to .o files and put on obj folder (created if needed)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(MKDIR) $(OBJ_DIR)
	$(CC) $(FLAGS) -c $< -o $@

# Master rule of Makefile
all: $(NAME)

# Rule to build the library
$(NAME): $(OFILES)
	@$(MAKE) -C $(LIBFT) all bonus
	$(CP) $(LIBFT)/libft.a $(DIR)
	$(MV) libft.a $(NAME)
	$(AR) $(NAME) $(OFILES)

# Rule to remove all object files
clean:
	$(RM) $(OBJ_DIR)
	@$(MAKE) clean -C $(LIBFT)

# Rule to call "clean" rule and remove the library .a
fclean: clean
	$(RM) $(NAME)
	@$(MAKE) fclean -C $(LIBFT)

# Rule to remove all created files and rebuild the library
re: fclean all

.PHONY: all clean fclean re
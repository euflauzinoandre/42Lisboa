# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/14 18:24:21 by aeuflauz          #+#    #+#              #
#    Updated: 2024/11/25 16:24:16 by aeuflauz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Text colors
RESET = \033[0m
GREEN = \033[32m
RED   = \033[31m

# Directory of executable file "push_swap"
NAME = $(ROOT_DIR)/push_swap

# Make command to compile libft file ('-s' to silence libft messages)
MAKE = @make -s

# Shell commands
CP = @cp
MV = @mv
RM = @rm -rf
AR = @ar -rcs
MKDIR = @mkdir -p
MESSAGE = @echo

# Directories
ROOT_DIR = .
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include
LIB_DIR = lib
LIBFT = libft

# Files
LIB_NAME = libpushswap.a
LIB_PATH = $(LIB_DIR)/$(LIB_NAME)

# Compiler and Flags
CC = @cc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE_DIR)

# C files to be compiled into objects
##	wildcard: create a .c files list
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Rule to generate object files from file list
##	patsubst: change .c files list into .o files list 
###	syntax = patsubst(pattern, replacement, text)
OBJS = $(patsubst $(SRC_DIR)/%.c, $(BUILD_DIR)/%.o, $(SRCS))

# Master
all: clear_screen $(NAME)
	$(MESSAGE) ""
	$(MESSAGE) "$(GREEN)## Compiled successfully!$(RESET)"
	@sleep 0.5
	$(MESSAGE) "## Call './push_swap' with integers [\" \" is optional]"
	$(MESSAGE) ""

# Rule compile objects, libraries and generate the final file "push_swap"
$(NAME): $(OBJS) $(LIB_PATH)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIB_DIR) -lpushswap -o $(NAME)

# Rule to build the library and move to "lib" folder
$(LIB_PATH): $(OBJS)
	$(MKDIR) $(LIB_DIR)
	$(MAKE) -C $(LIBFT) all bonus
	$(CP) $(LIBFT)/$(LIB_DIR)/libft.a $(LIB_DIR)
	$(MV) $(LIB_DIR)/libft.a $(LIB_PATH)
	$(AR) $(LIB_PATH) $(OBJS)

# Compile .c files to .o files and put on "build" folder (created if needed)
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(MKDIR) $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Clear screen rule
clear_screen:
	@clear

# Rule to remove all object files
clean:
	$(RM) $(BUILD_DIR)
	$(MAKE) clean -C $(LIBFT)
	$(MESSAGE) "$(RED)## Deleted object files$(RESET)"

# Rule to call "clean" rule and remove all libraries and the executable file
fclean: clean
	$(RM) $(LIB_DIR)
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBFT)	
	$(MESSAGE) "$(RED)## Deleted libraries$(RESET)"

# Rule to remove all created files and rebuild the project
re: clear_screen fclean all

.PHONY: all clean fclean re

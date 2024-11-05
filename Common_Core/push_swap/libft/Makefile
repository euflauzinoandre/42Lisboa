# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 15:28:18 by aeuflauz          #+#    #+#              #
#    Updated: 2024/11/05 16:31:03 by aeuflauz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of library
NAME = libft.a

# Shell commands
AR = @ar -rcs
RM = @rm -rf
MKDIR = @mkdir -p

# Directories
SRC_DIR = src
BUILD_DIR = build
INCLUDE_DIR = include
LIB_DIR = lib

# Files
LIB_PATH = $(LIB_DIR)/$(NAME)

# Compiler and Flags
CC = @gcc
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDE_DIR)

# C files to be compiled into objects
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_strmapi.c ft_striteri.c ft_itoa.c ft_strtrim.c ft_split.c \
	ft_putnbr_unsigned_fd.c ft_putnbr_base.c ft_printf.c output_data.c \
	print_integers.c
	
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Rule to generate object files from file list
OBJS = $(SRCS:%.c=$(BUILD_DIR)/%.o)
OBJS_BONUS = $(SRCS_BONUS:%.c=$(BUILD_DIR)/%.o)

# Rule to build the library
all: $(NAME)

# Rule to build library libft.a
$(NAME): $(OBJS)
	$(MKDIR) $(LIB_DIR)
	$(AR) $(LIB_PATH) $(OBJS)

# Compile .c files to .o files and put on obj folder (created if needed)
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(MKDIR) $(BUILD_DIR)
	$(CC) $(CFLAGS) -c $< -o $@


# Rule to build library libft.a of bonus part
bonus: $(OBJS_BONUS)
	$(AR) $(LIB_PATH) $(OBJS_BONUS)

# Rule to remove all object files 
clean:
	$(RM) $(BUILD_DIR)

# Rule to remove all object files (.o) and the library (libft.a)
fclean: clean
	$(RM) $(LIB_DIR)

# Rule to remove all files and rebuild the library
re: fclean all

.PHONY: all clean fclean re bonus

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 15:28:18 by aeuflauz          #+#    #+#              #
#    Updated: 2024/04/28 21:00:18 by aeuflauz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Define colors
GREEN=\033[0;32m
WHITE = \033[0;37m

# Name of library
NAME = libft.a

# Compiler
CC = @cc

# Flags to compile
FLAGS = -Wall -Wextra -Werror 

# Currently directory of files
DIR = .

# List of files
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c \
	ft_strtrim.c ft_split.c

# Generate object files from file list
OFILES = $(CFILES:%.c=$(DIR)/%.o)

all: $(NAME)
	@echo "\n$(GREEN)[Compiled successfully!]$(NC)\n"

# Generate library libft.a
$(NAME): $(OFILES)
	@echo "::Compiled .c files	[OK]"
	@ar -rcs $(NAME) $(OFILES)
	@echo "::Generated libft.a	[OK]"

# Compiler all .c files to .o files
$(DIR)/%.o: $(DIR)/%.c $(DIR)/%.h
	$(CC) $(FLAGS) -c $< -o $@

# Remove all object files (*.o)
clean:
	@rm -rf *.o
	@echo "::Deleted object files	[OK]"

# Call the directive clean and also remove de library (libft.a)
fclean: clean
	@rm -rf $(NAME)
	@echo "::Deleted libft.a	[OK]"

# Call the directive "fclean" and also execute "all" to rework Makefile
re: fclean all
	@echo "$(WHITE)(Rebuild)$(NC)"

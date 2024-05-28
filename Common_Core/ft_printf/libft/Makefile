# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 15:28:18 by aeuflauz          #+#    #+#              #
#    Updated: 2024/05/27 02:44:55 by aeuflauz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of library
NAME = libft.a

# Compiler
CC = @cc

# Flags to compile
FLAGS = -Wall -Wextra -Werror 

# Directory containing the files
DIR = .

# C files to be compiled into objects
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_strmapi.c ft_striteri.c ft_itoa.c ft_strtrim.c ft_split.c \
	ft_putnbr_unsigned_fd.c

# C files bonus part
CBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Rule to generate object files from file list
OFILES = $(CFILES:%.c=$(DIR)/%.o)
OBONUS = $(CBONUS:%.c=$(DIR)/%.o)

# Rule to build the library
all: $(NAME)

# Rule to build library libft.a
$(NAME): $(OFILES)
	@ar -rcs $(NAME) $(OFILES)

# Rule to build library libft.a of bonus part
bonus: $(OBONUS)
	@ar -rcs $(NAME) $(OBONUS)

# Rule to compile individual .c files to .o files
$(DIR)/%.o: $(DIR)/%.c $(DIR)/%.h
	$(CC) $(FLAGS) -c $< -o $@

# Rule to remove all object files 
clean:
	@rm -rf $(OFILES) $(OBONUS)

# Rule to remove all object files (.o) and the library (libft.a)
fclean: clean
	@rm -rf $(NAME)

# Rule to remove all files and rebuild the library
re: fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeuflauz <aeuflauz@student.42lisboa.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 15:28:18 by aeuflauz          #+#    #+#              #
#    Updated: 2024/05/05 23:03:47 by aeuflauz         ###   ########.fr        #
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

# Directory containing the files
DIR = .

# C files to be compiled into objects
CFILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_strmapi.c ft_striteri.c ft_itoa.c ft_strtrim.c ft_split.c

# C files bonus part
CBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
	ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# Rule to generate object files from file list
OFILES = $(CFILES:%.c=$(DIR)/%.o)
OBONUS = $(CBONUS:%.c=$(DIR)/%.o)

# Rule to build the library
all: $(NAME)
	@echo "\n$(GREEN)[Compiled successfully!]$(NC)\n"

# Rule to build library libft.a
$(NAME): $(OFILES)
	@echo "$(WHITE)::Compiled .c files	[OK]$(NC)"
	@ar -rcs $(NAME) $(OFILES)
	@echo "$(WHITE)::Builded libft.a	[OK]$(NC)"

# Rule to build library libft.a of bonus part
bonus: $(OBONUS)
	@echo "$(WHITE)::Compiled bonus files	[OK]$(NC)"
	@ar -rcs $(NAME) $(OBONUS)
	@echo "$(WHITE)::Builded bonus libft.a	[OK]$(NC)"
	@echo "\n$(GREEN)[Bonus compiled successfully!]$(NC)\n"	

# Rule to compile individual .c files to .o files
$(DIR)/%.o: $(DIR)/%.c $(DIR)/%.h
	$(CC) $(FLAGS) -c $< -o $@

# Rule to remove all object files 
clean:
	@rm -rf $(OFILES) $(OBONUS)
	@echo "$(WHITE)::Deleted object files	[OK]$(NC)"

# Rule to remove all object files (.o) and the library (libft.a)
fclean: clean
	@rm -rf $(NAME)
	@echo "$(WHITE)::Deleted libft.a	[OK]$(NC)"

# Rule to remove all files and rebuild the library
re: fclean all
	@echo "$(WHITE)(Rebuild)$(NC)"

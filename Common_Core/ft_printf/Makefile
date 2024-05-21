# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeuflauz <aeuflauz@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/12 17:48:48 by aeuflauz          #+#    #+#              #
#    Updated: 2024/05/21 01:38:19 by aeuflauz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of library
NAME = libftprintf.a

# Compiler
CC =  @cc

# Make command
MAKE = @make

# Linux commands
CP = @cp
MV = @mv
AR = @ar -rcs
RM = @rm -rf

# Flags to compile
FLAGS =  -Wall -Wextra -Werror

# Directories containing the files
DIR = .
LIBFT = libft

# C files to be compiled into objects
CFILES = ft_printf.c output_data.c print_integers.c

# Rule to generate object files from file list
OFILES = $(CFILES:%.c=$(DIR)/%.o)

# Rule master Makefile
all: $(NAME) 

# Rule to build the library
$(NAME): $(OFILES)
	$(MAKE) -C $(LIBFT) all bonus
	$(CP) $(LIBFT)/libft.a $(DIR)
	$(MV) libft.a $(NAME)
	$(AR) $(NAME) $(OFILES)

# Rule to compile individual .c files to .o files
$(DIR)/%.o: $(DIR)/%.c $(DIR)/%.h
	$(CC) $(FLAGS) -c $< -o $@

# Rule to remove all object files
clean:	
	$(RM) $(OFILES)
	$(MAKE) clean -C $(LIBFT)

# Rule to call "Clean" rule and remove the library .a
fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)/libft.a

# Rule to remove all created files and rebuild the library
re: fclean all

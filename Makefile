# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgraf <jgraf@student.42heilbronn.de>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 08:59:28 by jgraf             #+#    #+#              #
#    Updated: 2025/02/24 08:32:38 by jgraf            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude
AR = ar rcs

#	Colors
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

#	Source files
BOOL_SRC = $(addprefix bool/, ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c)
CONV_SRC = $(addprefix conversions/, ft_atoi.c ft_itoa.c)
LIST_SRC = $(addprefix list/, ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
			ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c)
MEM_SRC = $(addprefix memory/, ft_bzero.c ft_calloc.c ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c)
OTHER_SRC = $(addprefix other/, ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_tolower.c ft_toupper.c \
			ft_strlower.c ft_strupper.c)
STRING_SRC = $(addprefix string/, ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
			ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_str_repl_chr.c)
MATH_SRC = $(addprefix math/, ft_min.c ft_max.c ft_sign.c ft_abs.c ft_sqrt.c ft_pow.c)
PRINTF_SRC = $(addprefix ft_printf/, main.c ft_printf.c convert_number.c convert_pointer.c putchar.c)
GNL_SRC = $(addprefix get_next_line/, get_next_line.c get_next_line_utils.c)

SRC = $(addprefix src/, $(BOOL_SRC) $(CONV_SRC) $(LIST_SRC) $(MEM_SRC) $(OTHER_SRC) $(STRING_SRC) $(MATH_SRC) $(PRINTF_SRC) $(GNL_SRC))
OBJ = $(SRC:.c=.o)

#	Compile
all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "\n$(GREEN)Compilation of libft is complete!$(RESET)"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled: $(GREEN)$@$(RESET)"

clean:
	@rm -f $(OBJ)
	@echo "$(RED)Object files cleaned!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)$(NAME) cleaned!$(RESET)"

re: fclean all

.PHONY: all clean fclean re

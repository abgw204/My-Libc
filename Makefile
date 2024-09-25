# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 19:35:00 by gada-sil          #+#    #+#              #
#    Updated: 2024/09/25 12:12:06 by gada-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
FUNCTIONS = ft_strdup.c ft_strlen.c ft_strncmp.c ft_isprint.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_strnstr.c
OBJS = ft_strdup.o ft_strlen.o ft_strncmp.o ft_isprint.o ft_tolower.o ft_isalpha.o ft_isdigit.o
FUNCTIONS1 = ft_toupper.c ft_isascii.c ft_atoi.c ft_isalnum.c ft_strchr.c ft_strlcpy.c ft_strrchr.c
OBJS1 = ft_toupper.o ft_isascii.o ft_atoi.o ft_isalnum.o ft_strchr.o ft_strlcpy.o ft_strrchr.o ft_strnstr.o
NAME = libft

all: $(NAME)

$(NAME): $(OBJS) $(OBJS1)
	@echo "EXECUTABLE CREATED :)"
	@cc $(FLAGS) $(OBJS) $(OBJS1) -o libft

OBJS: $(FUNCTIONS) $(FUNCTIONS)
	cc $(FLAGS) -c $(FUNCTIONS)

OBJS1: $(FUNCTIONS) $(FUNCTIONS1)
	cc $(FLAGS) -c $(FUNCTIONS1)
clean:
	rm $(OBJS) $(OBJS1)

fclean:
	rm $(OBJS) $(OBJS1) $(NAME)
re: fclean all

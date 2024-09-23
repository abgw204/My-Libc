# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gada-sil <gada-sil@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 19:35:00 by gada-sil          #+#    #+#              #
#    Updated: 2024/09/23 20:19:57 by gada-sil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror
FUNCTIONS = strdup.c strlen.c strncmp.c isprint.c tolower.c isalpha.c isdigit.c
OBJS = strdup.o strlen.o strncmp.o isprint.o tolower.o isalpha.o isdigit.o
FUNCTIONS1 = toupper.c isascii.c atoi.c
OBJS1 = toupper.o isascii.o atoi.o

all: libft

libft: $(OBJS) $(OBJS1)
	@echo "EXECUTABLE CREATED :)"
	@cc $(FLAGS) $(OBJS) $(OBJS1) -o libft

OBJS: $(FUNCTIONS) $(FUNCTIONS)
	cc $(FLAGS) -c $(FUNCTIONS)

OBJS1: $(FUNCTIONS) $(FUNCTIONS1)
	cc $(FLAGS) -c $(FUNCTIONS1)
clean:
	rm $(OBJS) $(OBJS1) libft

FLAGS = -Wall -Wextra -Werror
FUNCTIONS = ft_strdup.c ft_strlen.c ft_strncmp.c ft_isprint.c ft_tolower.c ft_isalpha.c ft_isdigit.c ft_strnstr.c ft_substr.c ft_strtrim.c ft_itoa.c ft_putnbr_fd.c ft_memchr.c ft_memcpy.c \
ft_putendl_fd.c
OBJS = ft_strdup.o ft_strlen.o ft_strncmp.o ft_isprint.o ft_tolower.o ft_isalpha.o ft_isdigit.o ft_strjoin.o ft_strtrim.o ft_itoa.o ft_putstr_fd.o ft_putnbr_fd.o ft_memcmp.o ft_memset.o
FUNCTIONS1 = ft_toupper.c ft_isascii.c ft_atoi.c ft_isalnum.c ft_strchr.c ft_strlcpy.c ft_strrchr.c ft_strjoin.c ft_calloc.c ft_putstr_fd.c ft_putchar_fd.c ft_memcmp.c ft_memmove.c ft_memset.c ft_bzero.c ft_strlcat.c ft_split.c ft_striteri.c ft_strmapi.c
OBJS1 = ft_toupper.o ft_isascii.o ft_atoi.o ft_isalnum.o ft_strchr.o ft_strlcpy.o ft_strrchr.o ft_strnstr.o ft_substr.o ft_calloc.o ft_putchar_fd.o ft_memchr.o ft_memcpy.o ft_memmove.o ft_bzero.o ft_strlcat.o ft_split.o ft_striteri.o ft_strmapi.o ft_putendl_fd.o
BONUS_FUNCTIONS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c
BONUS_OBJS = ft_lstnew.o ft_lstadd_front.o ft_lstadd_back.o
BONUS = libft.a
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS) $(OBJS1)
	@clear
	@ar -rc $(NAME) $(OBJS) $(OBJS1)
	@echo "\033[40;40m░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\033[0m"
	@echo "\033[40;40m░░░░░░░▄▄▀▀▀▀▀▀▀▀▀▀▄▄█▄░░░░▄░░░░█░░░░░░░\033[0m"
	@echo "\033[40;40m░░░░░░█▀░░░░░░░░░░░░░▀▀█▄░░░▀░░░░░░░░░▄░\033[0m"
	@echo "\033[40;40m░░░░▄▀░░░░░░░░░░░░░░░░░▀██░░░▄▀▀▀▄▄░░▀░░\033[0m"
	@echo "\033[40;40m░░▄█▀▄█▀▀▀▀▄░░░░░░▄▀▀█▄░▀█▄░░█▄░░░▀█░░░░\033[0m"
	@echo "\033[40;40m░▄█░▄▀░░▄▄▄░█░░░▄▀▄█▄░▀█░░█▄░░▀█░░░░█░░░\033[0m"
	@echo "\033[40;40m▄█░░█░░░▀▀▀░█░░▄█░▀▀▀░░█░░░█▄░░█░░░░█░░░\033[0m"
	@echo "\033[40;40m██░░░▀▄░░░▄█▀░░░▀▄▄▄▄▄█▀░░░▀█░░█▄░░░█░░░\033[0m"
	@echo "\033[40;40m██░░░░░▀▀▀░░░░░░░░░░░░░░░░░░█░▄█░░░░█░░░\033[0m"
	@echo "\033[40;40m██░░░░░░░░░░░░░░░░░░░░░█░░░░██▀░░░░█▄░░░\033[0m"
	@echo "\033[40;40m██░░░░░░░░░░░░░░░░░░░░░█░░░░█░░░░░░░▀▀█▄\033[0m"
	@echo "\033[40;40m██░░░░░░░░░░░░░░░░░░░░█░░░░░█░░░░░░░▄▄██\033[0m"
	@echo "\033[40;40m░██░░░░░░░░░░░░░░░░░░▄▀░░░░░█░░░░░░░▀▀█▄\033[0m"
	@echo "\033[40;40m░▀█░░░░░░█░░░░░░░░░▄█▀░░░░░░█░░░░░░░▄▄██\033[0m"
	@echo "\033[40;40m░▄██▄░░░░░▀▀▀▄▄▄▄▀▀░░░░░░░░░█░░░░░░░▀▀█▄\033[0m"
	@echo "\033[40;40m░░▀▀▀▀░░░░░░░░░░░░░░░░░░░░░░█▄▄▄▄▄▄▄▄▄██\033[0m"
	@echo "\033[40;40m░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\033[0m"
	@echo "\033[46mLibft was created succesfully!\033[0m"

OBJS: $(FUNCTIONS)
	cc $(FLAGS) -c $(FUNCTIONS)

OBJS1: $(FUNCTIONS1)
	cc $(FLAGS) -c $(FUNCTIONS1)
clean:
	rm $(OBJS) $(OBJS1) $(BONUS_OBJS)

fclean:
	rm $(OBJS) $(OBJS1) $(NAME) $(BONUS_OBJS)
re: fclean all

bonus: $(BONUS)

$(BONUS): $(OBJS) $(OBJS1) $(BONUS_OBJS)
	@clear
	@ar -rc $(BONUS) $(OBJS) $(OBJS1) $(BONUS_OBJS)
	@echo "\033[40;40m░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\033[0m"
	@echo "\033[40;40m░░░░░░░▄▄▀▀▀▀▀▀▀▀▀▀▄▄█▄░░░░▄░░░░█░░░░░░░\033[0m"
	@echo "\033[40;40m░░░░░░█▀░░░░░░░░░░░░░▀▀█▄░░░▀░░░░░░░░░▄░\033[0m"
	@echo "\033[40;40m░░░░▄▀░░░░░░░░░░░░░░░░░▀██░░░▄▀▀▀▄▄░░▀░░\033[0m"
	@echo "\033[40;40m░░▄█▀▄█▀▀▀▀▄░░░░░░▄▀▀█▄░▀█▄░░█▄░░░▀█░░░░\033[0m"
	@echo "\033[40;40m░▄█░▄▀░░▄▄▄░█░░░▄▀▄█▄░▀█░░█▄░░▀█░░░░█░░░\033[0m"
	@echo "\033[40;40m▄█░░█░░░▀▀▀░█░░▄█░▀▀▀░░█░░░█▄░░█░░░░█░░░\033[0m"
	@echo "\033[40;40m██░░░▀▄░░░▄█▀░░░▀▄▄▄▄▄█▀░░░▀█░░█▄░░░█░░░\033[0m"
	@echo "\033[40;40m██░░░░░▀▀▀░░░░░░░░░░░░░░░░░░█░▄█░░░░█░░░\033[0m"
	@echo "\033[40;40m██░░░░░░░░░░░░░░░░░░░░░█░░░░██▀░░░░█▄░░░\033[0m"
	@echo "\033[40;40m██░░░░░░░░░░░░░░░░░░░░░█░░░░█░░░░░░░▀▀█▄\033[0m"
	@echo "\033[40;40m██░░░░░░░░░░░░░░░░░░░░█░░░░░█░░░░░░░▄▄██\033[0m"
	@echo "\033[40;40m░██░░░░░░░░░░░░░░░░░░▄▀░░░░░█░░░░░░░▀▀█▄\033[0m"
	@echo "\033[40;40m░▀█░░░░░░█░░░░░░░░░▄█▀░░░░░░█░░░░░░░▄▄██\033[0m"
	@echo "\033[40;40m░▄██▄░░░░░▀▀▀▄▄▄▄▀▀░░░░░░░░░█░░░░░░░▀▀█▄\033[0m"
	@echo "\033[40;40m░░▀▀▀▀░░░░░░░░░░░░░░░░░░░░░░█▄▄▄▄▄▄▄▄▄██\033[0m"
	@echo "\033[40;40m░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░\033[0m"
	@echo "\033[46mLibft was created succesfully!\033[0m"

OBJS: $(FUNCTIONS)
	cc $(FLAGS) -c $(FUNCTIONS)

OBJS1: $(FUNCTIONS1)
	cc $(FLAGS) -c $(FUNCTIONS1)

BONUS_OBJS: $(BONUS_FUNCTIONS)
	cc $(FLAGS) -c $(BONUS_FUNCTIONS)


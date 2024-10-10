FLAGS = -Wall -Wextra -Werror

FUNCTIONS = ft_strdup.c ft_strlen.c ft_strncmp.c \
ft_isprint.c ft_tolower.c ft_isalpha.c ft_isdigit.c \
ft_strnstr.c ft_substr.c ft_strtrim.c \
ft_itoa.c ft_putnbr_fd.c ft_memchr.c ft_memcpy.c \
ft_putendl_fd.c ft_toupper.c ft_isascii.c ft_atoi.c \
ft_isalnum.c ft_strchr.c ft_strlcpy.c ft_strrchr.c \
ft_strjoin.c ft_calloc.c ft_putstr_fd.c ft_putchar_fd.c \
ft_memcmp.c ft_memmove.c ft_memset.c ft_bzero.c ft_strlcat.c \
ft_split.c ft_striteri.c ft_strmapi.c
 
OBJS = ft_strdup.o ft_strlen.o ft_strncmp.o ft_isprint.o \
ft_tolower.o ft_isalpha.o ft_isdigit.o ft_strjoin.o ft_strtrim.o \
ft_itoa.o ft_putstr_fd.o ft_putnbr_fd.o ft_memcmp.o ft_memset.o \
ft_toupper.o ft_isascii.o ft_atoi.o ft_isalnum.o ft_strchr.o ft_strlcpy.o \
ft_strrchr.o ft_strnstr.o ft_substr.o ft_calloc.o ft_putchar_fd.o ft_memchr.o \
ft_memcpy.o ft_memmove.o ft_bzero.o ft_strlcat.o ft_split.o ft_striteri.o \
ft_strmapi.o ft_putendl_fd.o

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstlast_bonus.c \
ft_lstsize_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c

BONUS_OBJS = ft_lstnew_bonus.o ft_lstadd_front_bonus.o ft_lstadd_back_bonus.o ft_lstlast_bonus.o \
ft_lstsize_bonus.o ft_lstdelone_bonus.o ft_lstclear_bonus.o ft_lstiter_bonus.o

NAME = libft.a

.c.o:
	cc $(FLAGS) -c $< -o $(<:.c=.o)
all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
clean:
	rm -f $(OBJS) $(BONUS_OBJS)
fclean:
	rm -f $(OBJS) $(NAME) $(BONUS_OBJS)

re: fclean all

bonus: $(OBJS) $(BONUS_OBJS)
	ar -rc $(NAME) $(OBJS) $(BONUS_OBJS)

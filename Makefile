CC = cc
CFLAGS = -Wall -Werror -Wextra -I. -I $(HEADERDIR) -g
LFLAGS = -L. -lft -lbsd

NAME = libft.a

PART1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c

PART2 =	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
	ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c
CFILES = $(PART1) $(PART2)
OBJECTS = $(CFILES:.c=.o)

BONUS = ft_lstnew.c
BONUS_OBJECTS = $(BONUS:.c=.o)

# --- Default rules and dependencies ---
all: $(NAME)
	echo $(CFILES)

$(NAME): $(OBJECTS)
	ar -rcs $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $^

bonus: $(OBJECTS) $(BONUS_OBJECTS)
	ar -rcs $(NAME) $^

# --- Control rules ---
clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME) $(EXEC)

re: fclean all

.PHONY: all clean fclean

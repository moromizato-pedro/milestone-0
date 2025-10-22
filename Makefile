
SOURCEDIR = srcs
HEADERDIR = includes

CC = cc
CFLAGS = -Wall -Werror -Wextra -I $(HEADERDIR) -g
LFLAGS = -lbsd -L. -lft

NAME = libft.a
EXEC = test
CFILES = $(wildcard $(SOURCEDIR)/*.c)
OBJECTS = $(CFILES:.c=.o)

# --- Default rules and dependencies ---
all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rcs $@ $^


$(SOURCEDIR)/%.o : $(SOURCEDIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $^

#bonus:

# --- Testing rules and dependencies ---
test: main.c $(NAME)
	$(CC) $(CFLAGS) main.c -o $@ $(LFLAGS)
so:
	$(CC) -fPIC $(CFLAGS) $(CFILES)
	gcc -shared -o libft.so $(OBJECTS)

# --- Control rules ---
clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME) $(EXEC)

re: fclean all

.PHONY: all clean fclean

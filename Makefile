CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
SRCS = *.c
INCLUDES = -I ./includes/*.h
NAME = libft.a

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) $(INCLUDES)
	ar rc $(NAME) *.o
	
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re:	fclean all
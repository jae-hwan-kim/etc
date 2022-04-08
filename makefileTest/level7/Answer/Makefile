CC = gcc
AR = ar
ARFLAGS = -rcs
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CFILES = first.c\
		 second.c\
		 third.c\
		 main.c
OBJS = $(CFILES:.c=.o)

all: $(NAME)

run: $(NAME) $(OBJS)
	$(CC) $(CFLAGS) $^

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) a.out

re: fclean all

.PHONY : all clean fclean

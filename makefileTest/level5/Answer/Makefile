CC = gcc
AR = ar
ARFLAGS = -rcs
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CFILES = first.c\
		 second.c\
		 third.c

all: $(NAME)

OBJS = $(CFILES:.c=.o)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean

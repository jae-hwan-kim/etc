CC = gcc
NAME = libft.a
AR = ar -rcs
CFLAGS = -Wall -Wextra -Werror
CFILES = first.c\
		 second.c\
		 third.c

OBJS = first.o\
	   second.o\
	   third.o

$(NAME) : $(OBJS)
	$(AR) $@ $^

%.o : %.c
	$(CC) $(CFLAGS) -c $<

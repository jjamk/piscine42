CC = gcc
TARGET = app.out
OBJS = main.o kor.o usa.o

CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -lc
all : $(TARGET)

$(TARGET) : $(OBJS)
		$(CC) $(LDFLAGS) -o $@  $^

.c.o :
		$(CC) $(CFLAGS) -c -o $@ $<

clean :
	rm -f $(OBJS) $(TARGET)

fclean : 
	rm -f :q

re : fclean all


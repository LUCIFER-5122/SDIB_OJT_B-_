CC = gcc
CFLAGS = -Wall -Wextra
TARGET = c_program
SRCS = main.c 1.c 2.c 3.c 4.c 5.c 6.c 7.c 8.c 9.c 10.c 11.c 12.c 13.c 14.c 15.c 16.c 17.c 18.c 19.c 20.c 21.c 22.c 23.c 24.c 25.c 26.c 27.c 28.c 29.c 30.c 31.c 32.c 33.c 34.c 35.c 36.c 37.c 38.c 39.c 40.c 41.c 42.c 43.c 44.c 45.c 46.c 47.c 48.c 49.c 50.c
OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

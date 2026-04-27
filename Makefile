CC = gcc
CFLAGS = -Wall -Wextra

.PHONY: all clean run

all: main

main: main.c math.c math.h trig.c
	$(CC) $(CFLAGS) main.c math.c trig.c -o main
run: main
	./main
clean:
	rm -f main
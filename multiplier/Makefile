
CC=gcc
CFLAGS=-g -Wall
BIN=multiplier

$(BIN): multiplier.o
	$(CC) $(CFLAGS) multiplier.o -o $@

multiplier.o: multiplier.c
	$(CC) $(CFLAGS) multiplier.c -c $^

clean:
	$(RM) -r $(BIN) *.dSYM
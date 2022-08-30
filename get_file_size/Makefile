
CC=gcc
CFLAGS=-g -Wall
BIN=main

all: $(BIN)

$(BIN): $(BIN).c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	$(RM) -r $(BIN) *.dSYM
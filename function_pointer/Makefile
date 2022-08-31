
CC=gcc
CFLAGS=-g -Wall
BIN=function_pointer

objects := $(wildcard *.o)

all: $(BIN)

$(BIN): $(objects)
	$(CC) $(CFLAGS) $(objects) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	$(RM) -r $(BIN) *.dSYM

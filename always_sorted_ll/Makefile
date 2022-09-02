
CC=gcc
CFLAGS=-g -Wall
BIN=always_sorted_ll

objects := $(wildcard *.o)

all: $(BIN)

$(BIN): $(objects)
	$(CC) $(CFLAGS) $(objects) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	$(RM) -r $(BIN) *.dSYM

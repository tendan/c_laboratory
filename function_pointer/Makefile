
CC=gcc
CFLAGS=-g -Wall
BIN=function_pointer

all: $(BIN)

$(BIN): function_pointer.o func_utils.o
	$(CC) $(CFLAGS) function_pointer.o func_utils.o -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	$(RM) -r $(BIN) *.dSYM

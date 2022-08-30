
CC=gcc
CFLAGS=-g -Wall
BIN=linked_list

all: $(BIN)

$(BIN): linked_list.o list_utils.o
	$(CC) $(CFLAGS) linked_list.o list_utils.o -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $^

clean:
	$(RM) -r $(BIN) *.dSYM

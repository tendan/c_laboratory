
CC=gcc
CFLAGS=-g -Wall

SOURCE_NAME=queue

all: $(SOURCE_NAME)

$(SOURCE_NAME): $(SOURCE_NAME).o
	$(CC) $(CFLAGS) $(SOURCE_NAME).o -o $@

$(SOURCE_NAME).o: $(SOURCE_NAME).c
	$(CC) $(CFLAGS) -c $(SOURCE_NAME).c
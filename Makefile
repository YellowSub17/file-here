CC=gcc
FLAGS=-Wall -v
SRC=src/file-here.c
PROG=build/file-here

all: $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(PROG)

clean:
	rm build/*



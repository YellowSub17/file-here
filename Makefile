CC=gcc
FLAGS=-Wall -v -save-temps
SRC=src/file-here.c
PROG=build/file-here

all: $(SRC)
	$(CC) $(FLAGS) $(SRC) -o $(PROG)

clean: $(PROG)
	rm build/*



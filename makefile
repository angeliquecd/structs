all: structs.o
	gcc -o program structs.o

structs.o: structs.c structs.h
	gcc -c structs.c

run:
	./program

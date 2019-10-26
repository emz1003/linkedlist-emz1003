all: main.o list.o
	gcc -g -o program main.o list.o
main.o: main.c list.h
	gcc -c -g main.c
list.o:	list.c list.h
	gcc -c -g list.c
run: 
	./program
clean:
	rm *.o
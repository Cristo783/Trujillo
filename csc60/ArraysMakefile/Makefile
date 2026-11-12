main: main.o selection.o display.o
	gcc main.o selection.o display.o -o main -lm

main.o: main.c main.h
	gcc -c main.c -o main.o

selection.o: selection.c main.h
	gcc -c selection.c -o selection.o 

display.o: display.c main.h
	gcc -c display.c -o display.o 
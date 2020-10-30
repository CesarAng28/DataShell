array: main.o files.o array.o
	gcc -o array main.o files.o array.o

main.o: main.c
	gcc -c main.c

files.o: files.c
	gcc -c files.c

array.o: array.c
	gcc -c array.c

clean:
	rm *.o

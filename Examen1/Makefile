stat: main.o Statistic.o File.o
	gcc -o stat main.o Statistic.o File.o

main.o: main.c
	gcc -c main.c

Statistic.o: Statistic.c
	gcc -c Statistic.c

File.o: File.c
	gcc -c File.c

clean:
	rm *.o

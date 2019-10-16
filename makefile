all: main.o
	gcc -o construct main.o

main.o: main.c
	gcc -c main.c

run:
	./construct

clean:
	rm *.o
	rm *~

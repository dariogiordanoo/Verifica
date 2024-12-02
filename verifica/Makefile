all: main

main: main.o math.o pow.o
	gcc -o calcolatrice main.o math.o pow.o

main.o: main.c math.h pow.h
	gcc -c -o main.o main.c 

math.o: math.c 
	gcc -c -o math.o math.c

pow.o: pow.c 
	gcc -c -o pow.o pow.c 

clean:main.o math.o pow.o
	rm -rf main.o math.o pow.o
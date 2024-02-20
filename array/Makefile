CC = gcc -Wall -pedantic

build:
	mkdir -p build

array.o: build array.c 
	$(CC) array.c -c -o build/array.o
	$(CC) element.c -c -o build/element.o

main: build array.o main.c
	$(CC) main.c build/array.o build/element.o -o build/main

opaque_test: array.o
	$(CC) opaque_test.c build/array.o build/element.o -o build/opaque_test

encapsulation_violation: array.o
	$(CC) encapsulation_violation.c build/array.o build/element.o -o build/encapsulation_violation

clean:
	rm -rf build

run: main
	./build/main
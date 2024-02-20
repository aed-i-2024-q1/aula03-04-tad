build:
	mkdir -p build

array.o: build array.c 
	gcc -Wall -pedantic array.c -c -o build/array.o
	gcc -Wall -pedantic element.c -c -o build/element.o

main: build array.o main.c
	gcc -Wall -pedantic main.c build/array.o build/element.o -o build/main

opaque_test: array.o
	gcc -Wall -pedantic opaque_test.c build/array.o build/element.o -o build/opaque_test

encapsulation_violation: array.o
	gcc -Wall -pedantic encapsulation_violation.c build/array.o build/element.o -o build/encapsulation_violation

clean:
	rm -rf build

run: main
	./build/main
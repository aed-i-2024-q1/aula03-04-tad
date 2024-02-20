build:
	mkdir -p build

lib: build
	gcc -c -o build/array_dinamico.o array_dinamico.c
	gcc -c -o build/element.o element.c

main: lib
	gcc -o build/main build/array_dinamico.o build/element.o main.c

run: main
	./build/main
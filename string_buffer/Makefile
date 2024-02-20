build:
	mkdir -p build

array_dinamico: build
	gcc -c -o build/array_dinamico.o inc/array_dinamico.c
	gcc -c -o build/element.o inc/element.c

string_buffer: array_dinamico
	gcc -c -o build/string_buffer.o string_buffer.c

main: string_buffer
	gcc -o build/main main.c build/string_buffer.o build/element.o build/array_dinamico.o

clean:
	rm -rf build

run: main
	./build/main
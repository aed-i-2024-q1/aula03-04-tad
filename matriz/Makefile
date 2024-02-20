build:
	mkdir -p build

matriz: build matriz.c
	gcc -c -o build/matriz.o matriz.c

main: build matriz
	gcc -o build/main build/matriz.o main.c

clean:
	rm -rf build

run: main
	./build/main
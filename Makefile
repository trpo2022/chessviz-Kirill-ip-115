programa: bin/programa

test: bin/programa-test

build/programa-test.o: test/main.c build
	gcc -std=c99 -I thirdparty -I src -c test/main.c -o build/programa-test.o

build/main.o: src/main.c build
	gcc -std=c99 -Wall -Werror -c src/main.c -o build/main.o

build/board.o: src/board.c
	gcc -std=c99 -Wall -Werror -c src/board.c -o build/board.o

build/board_print_plain.o: src/board_print_plain.c
	gcc -std=c99 -Wall -Werror -c src/board_print_plain.c -o build/board_print_plain.o

bin/programa: build/main.o build/board.o build/board_print_plain.o bin
	gcc -Wall -Werror build/main.o build/board.o build/board_print_plain.o -lm -o bin/programa

bin/programa-test: build/programa-test.o build/board.o build/board_print_plain.o bin
	gcc -Wall -Werror build/programa-test.o build/board.o build/board_print_plain.o -lm -o bin/programa-test

.PHONY : clean

bin:
	mkdir bin

build:
	mkdir build

clean:
	rm -rf build
	rm -rf bin

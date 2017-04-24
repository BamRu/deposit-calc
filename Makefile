all: deposit

deposit: build/deposit.o build/main.o
	gcc -Wall -MP -MMD -o bin/main build/deposit.o build/main.o

build/main.o: src/main.c
	gcc -Wall -Werror -MP -MMD -o build/main.o -c src/main.c

build/deposit.o: src/deposit.c
	gcc -Wall -Werror -MP -MMD -o build/deposit.o -c src/deposit.c

clean:
	rm -rf build/*bin/*

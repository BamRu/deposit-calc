all: deposit

deposit: build/deposit.o build/main.o
	gcc -Wall -MP -MMD -o bin/main build/deposit.o build/main.o

build/main.o: src/main.c
	gcc -Wall -Werror -MP -MMD -o build/main.o -c src/main.c

build/deposit.o: src/deposit.c
	gcc -Wall -Werror -MP -MMD -o build/deposit.o -c src/deposit.c

ctest:

ctest: build/test/deposit_test.o build/test/main.o build/deposit.o
	gcc build/test/deposit_test.o build/test/main.o build/deposit.o -o bin/deposit_test

build/test/deposit_test.o: test/deposit_test.c
	gcc -Wall -Werror -I src -I thirdparty -c test/deposit_test.c -o build/test/deposit_test.o

build/test/main.o: test/main.c
	gcc -Wall -Werror -I src -I thirdparty -c test/main.c -o build/test/main.o


clean:
	rm -rf build/*bin/*

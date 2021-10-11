build:
	gcc -std=c99 -Wall ./lib/lua/src/*.c ./src/*.c -o main -o main -ldl

clean:
	rm ./main

run:
	./main
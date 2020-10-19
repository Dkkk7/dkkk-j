VPATH = src:include:bin:lib
testmymath-20209311:main.o add.o sub.o mul.o div.o
	gcc ./bin/main.o ./bin/add.o ./bin/sub.o ./bin/mul.o ./bin/div.o -o ./bin/testmymath-20209311

main.o:main.s
	gcc -c ./bin/main.s -o ./bin/main.o
add.o:add.s
	gcc -c ./bin/add.s -o ./bin/add.o
sub.o:sub.s
	gcc -c ./bin/sub.s -o ./bin/sub.o
mul.o:mul.s
	gcc -c ./bin/mul.s -o ./bin/mul.o
div.o:div.s
	gcc -c ./bin/div.s -o ./bin/div.o

main.s:main.i
	gcc -S ./bin/main.i -o ./bin/main.s
add.s:add.i
	gcc -S ./bin/add.i -o ./bin/add.s
sub.s:sub.i
	gcc -S ./bin/sub.i -o ./bin/sub.s
mul.s:mul.i
	gcc -S ./bin/mul.i -o ./bin/mul.s
div.s:div.i
	gcc -S ./bin/div.i -o ./bin/div.s

main.i:main.c head.h
	gcc -E ./src/main.c -I ./include -o ./bin/main.i
add.i:add.c head.h
	gcc -E ./src/add.c -I ./include -o ./bin/add.i
sub.i:sub.c head.h
	gcc -E ./src/sub.c -I ./include -o ./bin/sub.i
mul.i:mul.c head.h
	gcc -E ./src/mul.c -I ./include -o ./bin/mul.i
div.i:div.c head.h
	gcc -E ./src/div.c -I ./include -o ./bin/div.i

libmymath.a:add.o sub.o mul.o div.o
	ar rcvs ./lib/libmymath.a ./bin/add.o ./bin/sub.o ./bin/mul.o ./bin/div.o
libmymath.so:add.o sub.o mul.o div.o
	gcc -shared -o ./lib/libmymath.so ./bin/add.o ./bin/sub.o ./bin/mul.o ./bin/div.o

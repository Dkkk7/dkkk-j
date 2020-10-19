VPATH=src:bin:include
testmyod-20209311:myod.o ascii.o hex.o
	gcc ./bin/myod.o ./bin/ascii.o ./bin/hex.o -o ./bin/testmyod-20209311
myod.o:myod.c head.h
	gcc -c ./src/myod.c  -I ./include -o ./bin/myod.o
ascii.o:ascii.c head.h
	gcc -c ./src/ascii.c  -I ./include -o ./bin/ascii.o
hex.o:hex.c head.h
	gcc -c ./src/hex.c  -I ./include -o ./bin/hex.o

myod.a:myod.o ascii.o hex.o
	ar rcvs ./lib/libmyod.a ./bin/myod.o ./bin/ascii.o ./bin/hex.o
myod.so:myod.o ascii.o hex.o
	gcc -shared -o ./lib/libmyod.so ./bin/myod.o ./bin/ascii.o ./bin/hex.o

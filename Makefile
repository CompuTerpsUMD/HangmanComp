all: user_pgm handler

handler: handler.o
	gcc handler.o -o handler

user_pgm: user_pgm.o
	gcc user_pgm.o -o user_pgm

handler.o: handler.c handler.h
	gcc handler.c -c

user_pgm.o: user_pgm.c
	gcc user_pgm.c -c

clean:
	rm -f *.class *.o handler user_pgm

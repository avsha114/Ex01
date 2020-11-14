CC=gcc
FLAGS= -Wall -g

all: mains maind

mains: main.o mymaths
	$(CC) $(FLAGS) -o mains main.o libmyMath.a
	
maind: main.o mymathd
	$(CC) $(FLAGS) -o maind main.o ./libmyMath.so

mymaths: basicMath.o power.o
	ar -rcs libmyMath.a basicMath.o power.o
	
mymathd: basicMath.o power.o
	$(CC) -shared -o libmyMath.so basicMath.o power.o

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c
	
power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
	
.PHONY: clean

clean:
	rm -f *.o *.so *.a maind mains
player : player.o
	gcc -o player -L../lib player.o -lfuncs
player.o : player.c
	gcc -g -c -I../include player.c -o player.o

clean :
	rm player.o player

Minesweeper : Minesweeper.o
	gcc `pkg-config --cflags gtk+-2.0` Minesweeper.o -o Minesweeper `pkg-config --libs gtk+-2.0` -L../lib -lfuncs -I../include 
Minesweeper.o : Minesweeper.c
	gcc `pkg-config --libs --cflags gtk+-2.0` -g -c Minesweeper.c -o Minesweeper.o -I../include
clean :
	rm Minesweeper.o Minesweeper

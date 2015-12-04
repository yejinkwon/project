libfuncs.a : button.o checkFinish.o level.o timer.o finishwindow.o
	ar rv libfuncs.a button.o checkFinish.o level.o timer.o finishwindow.o
button.o : button.c
	gcc `pkg-config --cflags --libs gtk+-2.0` -c -g -I../include button.c -o button.o
checkFinish.o : checkFinish.c
	gcc `pkg-config --cflags --libs gtk+-2.0` -c -g -I../include checkFinish.c -o checkFinish.o
level.o : level.c
	gcc `pkg-config --cflags --libs gtk+-2.0` -c -g -I../include level.c -o level.o
timer.o : timer.c
	gcc `pkg-config --cflags --libs gtk+-2.0` -c -g -I../include timer.c -o timer.o
finishwindow.o : finishwindow.c
	gcc `pkg-config --cflags --libs gtk+-2.0` -c -g -I../include finishwindow.c -o finishwindow.o

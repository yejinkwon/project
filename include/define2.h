#pragma once
#define _DEF2_H_
#include <memory.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <time.h>
GtkWidget* window;
GtkWidget* window2;
GtkWidget* window3;
GtkWidget *clear_Timelabel, *clear_scorelabel;
GtkWidget *Timelabel, *scorelabel, *Donelabel, *Levellabel;
GtkWidget *vbox, *vbox1, *clear_vbox;
GtkWidget *hbox1, *hbox2, *hbox3, *hbox4, *hbox5, *hbox6, *hbox7;
GtkWidget *button_H, *button_M, *button_L;
GtkWidget *button1, *button2, *button3, *button4;
GtkWidget *button5, *button6, *button7, *button8;
GtkWidget *button9, *button10, *button11, *button12;
GtkWidget *button13, *button14, *button15, *button16;
GtkWidget *button17, *button18, *button19, *button20;
GtkWidget *button21, *button22, *button23, *button24, *button25;
GtkWidget *button26, *button27, *button28, *button29, *button30;
GtkWidget *button31, *button32, *button33, *button34, *button35;
GtkWidget *button36, *button37, *button38, *button39, *button40;
GtkWidget *button41, *button42, *button43, *button44, *button45;
GtkWidget *button46, *button47, *button48, *button49;

int timer(gpointer data);
int checkFinish();
int finish_window(int mode);
int levelselect(GtkWidget* widget, gpointer user_data);
int buttonClicked(GtkWidget* widget, int *user_data);



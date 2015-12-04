#include <stdio.h>
#include <memory.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <time.h>
#include "define2.h"

int main(int argc, char *argv[])
{
	int n[50] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 };
	int level[3] = { 10, 7, 5 };
	srand((unsigned)time(NULL));
	gtk_init(&argc, &argv);

	//creat window
	window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	window2 = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	window3 = gtk_window_new(GTK_WINDOW_TOPLEVEL);
	g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	g_signal_connect(G_OBJECT(window2), "destroy", G_CALLBACK(gtk_main_quit), NULL);
	g_signal_connect(G_OBJECT(window3), "destroy", G_CALLBACK(gtk_main_quit), NULL);

	vbox = gtk_vbox_new(TRUE, 0);
	vbox1 = gtk_vbox_new(TRUE, 0);
	clear_vbox = gtk_vbox_new(TRUE, 0);

	Timelabel = gtk_label_new("00:00:00");
	gtk_widget_set_size_request(Timelabel, 200, 50); //100
	gtk_container_add(GTK_CONTAINER(vbox), Timelabel);

	clear_Timelabel = gtk_label_new("");
	gtk_widget_set_size_request(clear_Timelabel, 200, 50); //100
	gtk_container_add(GTK_CONTAINER(clear_vbox), clear_Timelabel);

	clear_scorelabel = gtk_label_new("");
	gtk_widget_set_size_request(clear_scorelabel, 200, 50); //100
	gtk_container_add(GTK_CONTAINER(clear_vbox), clear_scorelabel);


	hbox1 = gtk_hbox_new(TRUE, 0);
	hbox2 = gtk_hbox_new(TRUE, 0);
	hbox3 = gtk_hbox_new(TRUE, 0);
	hbox4 = gtk_hbox_new(TRUE, 0);
	hbox5 = gtk_hbox_new(TRUE, 0);
	hbox6 = gtk_hbox_new(TRUE, 0);
	hbox7 = gtk_hbox_new(TRUE, 0);

	button_H = gtk_button_new_with_label("HIGH");
	gtk_widget_set_size_request(button_H, 200, 100);
	g_signal_connect(G_OBJECT(button_H), "clicked", G_CALLBACK(levelselect), &level[0]);
	button_M = gtk_button_new_with_label("MIDDLE");
	gtk_widget_set_size_request(button_M, 200, 100);
	g_signal_connect(G_OBJECT(button_M), "clicked", G_CALLBACK(levelselect), &level[1]);
	button_L = gtk_button_new_with_label("LOW");
	gtk_widget_set_size_request(button_L, 200, 100);
	g_signal_connect(G_OBJECT(button_L), "clicked", G_CALLBACK(levelselect), &level[2]);

	button1 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button1, 50, 25);
	g_signal_connect(G_OBJECT(button1), "clicked", G_CALLBACK(buttonClicked), &n[1]);

	button2 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button2, 50, 25);
	g_signal_connect(G_OBJECT(button2), "clicked", G_CALLBACK(buttonClicked), &n[2]);

	button3 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button3, 50, 25);
	g_signal_connect(G_OBJECT(button3), "clicked", G_CALLBACK(buttonClicked), &n[3]);

	button4 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button4, 50, 25);
	g_signal_connect(G_OBJECT(button4), "clicked", G_CALLBACK(buttonClicked), &n[4]);

	button5 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button5, 50, 25);
	g_signal_connect(G_OBJECT(button5), "clicked", G_CALLBACK(buttonClicked), &n[5]);

	button6 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button6, 50, 25);
	g_signal_connect(G_OBJECT(button6), "clicked", G_CALLBACK(buttonClicked), &n[6]);

	button7 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button7, 50, 25);
	g_signal_connect(G_OBJECT(button7), "clicked", G_CALLBACK(buttonClicked), &n[7]);

	button8 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button8, 50, 25);
	g_signal_connect(G_OBJECT(button8), "clicked", G_CALLBACK(buttonClicked), &n[8]);

	button9 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button9, 50, 25);
	g_signal_connect(G_OBJECT(button9), "clicked", G_CALLBACK(buttonClicked), &n[9]);

	button10 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button10, 50, 25);
	g_signal_connect(G_OBJECT(button10), "clicked", G_CALLBACK(buttonClicked), &n[10]);

	button11 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button11, 50, 25);
	g_signal_connect(G_OBJECT(button11), "clicked", G_CALLBACK(buttonClicked), &n[11]);

	button12 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button12, 50, 25);
	g_signal_connect(G_OBJECT(button12), "clicked", G_CALLBACK(buttonClicked), &n[12]);

	button13 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button13, 50, 25);
	g_signal_connect(G_OBJECT(button13), "clicked", G_CALLBACK(buttonClicked), &n[13]);

	button14 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button14, 50, 25);
	g_signal_connect(G_OBJECT(button14), "clicked", G_CALLBACK(buttonClicked), &n[14]);

	button15 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button15, 50, 25);
	g_signal_connect(G_OBJECT(button15), "clicked", G_CALLBACK(buttonClicked), &n[15]);

	button16 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button16, 50, 25);
	g_signal_connect(G_OBJECT(button16), "clicked", G_CALLBACK(buttonClicked), &n[16]);

	button17 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button17, 50, 25);
	g_signal_connect(G_OBJECT(button17), "clicked", G_CALLBACK(buttonClicked), &n[17]);

	button18 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button18, 50, 25);
	g_signal_connect(G_OBJECT(button18), "clicked", G_CALLBACK(buttonClicked), &n[18]);

	button19 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button19, 50, 25);
	g_signal_connect(G_OBJECT(button19), "clicked", G_CALLBACK(buttonClicked), &n[19]);

	button20 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button20, 50, 25);
	g_signal_connect(G_OBJECT(button20), "clicked", G_CALLBACK(buttonClicked), &n[20]);

	button21 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button21, 50, 25);
	g_signal_connect(G_OBJECT(button21), "clicked", G_CALLBACK(buttonClicked), &n[21]);

	button22 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button22, 50, 25);
	g_signal_connect(G_OBJECT(button22), "clicked", G_CALLBACK(buttonClicked), &n[22]);

	button23 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button23, 50, 25);
	g_signal_connect(G_OBJECT(button23), "clicked", G_CALLBACK(buttonClicked), &n[23]);

	button24 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button24, 50, 25);
	g_signal_connect(G_OBJECT(button24), "clicked", G_CALLBACK(buttonClicked), &n[24]);

	button25 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button25, 50, 25);
	g_signal_connect(G_OBJECT(button25), "clicked", G_CALLBACK(buttonClicked), &n[25]);

	button26 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button26, 50, 25);
	g_signal_connect(G_OBJECT(button26), "clicked", G_CALLBACK(buttonClicked), &n[26]);

	button27 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button27, 50, 25);
	g_signal_connect(G_OBJECT(button27), "clicked", G_CALLBACK(buttonClicked), &n[27]);

	button28 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button28, 50, 25);
	g_signal_connect(G_OBJECT(button28), "clicked", G_CALLBACK(buttonClicked), &n[28]);

	button29 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button29, 50, 25);
	g_signal_connect(G_OBJECT(button29), "clicked", G_CALLBACK(buttonClicked), &n[29]);

	button30 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button30, 50, 25);
	g_signal_connect(G_OBJECT(button30), "clicked", G_CALLBACK(buttonClicked), &n[30]);

	button31 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button31, 50, 25);
	g_signal_connect(G_OBJECT(button31), "clicked", G_CALLBACK(buttonClicked), &n[31]);

	button32 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button32, 50, 25);
	g_signal_connect(G_OBJECT(button32), "clicked", G_CALLBACK(buttonClicked), &n[32]);

	button33 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button33, 50, 25);
	g_signal_connect(G_OBJECT(button33), "clicked", G_CALLBACK(buttonClicked), &n[33]);

	button34 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button34, 50, 25);
	g_signal_connect(G_OBJECT(button34), "clicked", G_CALLBACK(buttonClicked), &n[34]);

	button35 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button35, 50, 25);
	g_signal_connect(G_OBJECT(button35), "clicked", G_CALLBACK(buttonClicked), &n[35]);

	button36 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button36, 50, 25);
	g_signal_connect(G_OBJECT(button36), "clicked", G_CALLBACK(buttonClicked), &n[36]);

	button37 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button37, 50, 25);
	g_signal_connect(G_OBJECT(button37), "clicked", G_CALLBACK(buttonClicked), &n[37]);

	button38 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button38, 50, 25);
	g_signal_connect(G_OBJECT(button38), "clicked", G_CALLBACK(buttonClicked), &n[38]);

	button39 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button39, 50, 25);
	g_signal_connect(G_OBJECT(button39), "clicked", G_CALLBACK(buttonClicked), &n[39]);

	button40 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button40, 50, 25);
	g_signal_connect(G_OBJECT(button40), "clicked", G_CALLBACK(buttonClicked), &n[40]);

	button41 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button41, 50, 25);
	g_signal_connect(G_OBJECT(button41), "clicked", G_CALLBACK(buttonClicked), &n[41]);

	button42 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button42, 50, 25);
	g_signal_connect(G_OBJECT(button42), "clicked", G_CALLBACK(buttonClicked), &n[42]);

	button43 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button43, 50, 25);
	g_signal_connect(G_OBJECT(button43), "clicked", G_CALLBACK(buttonClicked), &n[43]);

	button44 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button44, 50, 25);
	g_signal_connect(G_OBJECT(button44), "clicked", G_CALLBACK(buttonClicked), &n[44]);

	button45 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button45, 50, 25);
	g_signal_connect(G_OBJECT(button45), "clicked", G_CALLBACK(buttonClicked), &n[45]);

	button46 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button46, 50, 25);
	g_signal_connect(G_OBJECT(button46), "clicked", G_CALLBACK(buttonClicked), &n[46]);

	button47 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button47, 50, 25);
	g_signal_connect(G_OBJECT(button47), "clicked", G_CALLBACK(buttonClicked), &n[47]);

	button48 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button48, 50, 25);
	g_signal_connect(G_OBJECT(button48), "clicked", G_CALLBACK(buttonClicked), &n[48]);

	button49 = gtk_button_new_with_label("");
	gtk_widget_set_size_request(button49, 50, 25);
	g_signal_connect(G_OBJECT(button49), "clicked", G_CALLBACK(buttonClicked), &n[49]);

	scorelabel = gtk_label_new("score : 0");
	gtk_widget_set_size_request(scorelabel, 100, 50);
	Donelabel = gtk_label_new(" ");
	gtk_widget_set_size_request(Donelabel, 50, 50);
	Levellabel = gtk_label_new("Level Select");
	gtk_widget_set_size_request(scorelabel, 200, 50);

	gtk_container_add(GTK_CONTAINER(hbox1), button1);
	gtk_container_add(GTK_CONTAINER(hbox1), button2);
	gtk_container_add(GTK_CONTAINER(hbox1), button3);
	gtk_container_add(GTK_CONTAINER(hbox1), button4);
	gtk_container_add(GTK_CONTAINER(hbox1), button5);
	gtk_container_add(GTK_CONTAINER(hbox1), button6);
	gtk_container_add(GTK_CONTAINER(hbox1), button7);

	gtk_container_add(GTK_CONTAINER(hbox2), button8);
	gtk_container_add(GTK_CONTAINER(hbox2), button9);
	gtk_container_add(GTK_CONTAINER(hbox2), button10);
	gtk_container_add(GTK_CONTAINER(hbox2), button11);
	gtk_container_add(GTK_CONTAINER(hbox2), button12);
	gtk_container_add(GTK_CONTAINER(hbox2), button13);
	gtk_container_add(GTK_CONTAINER(hbox2), button14);

	gtk_container_add(GTK_CONTAINER(hbox3), button15);
	gtk_container_add(GTK_CONTAINER(hbox3), button16);
	gtk_container_add(GTK_CONTAINER(hbox3), button17);
	gtk_container_add(GTK_CONTAINER(hbox3), button18);
	gtk_container_add(GTK_CONTAINER(hbox3), button19);
	gtk_container_add(GTK_CONTAINER(hbox3), button20);
	gtk_container_add(GTK_CONTAINER(hbox3), button21);

	gtk_container_add(GTK_CONTAINER(hbox4), button22);
	gtk_container_add(GTK_CONTAINER(hbox4), button23);
	gtk_container_add(GTK_CONTAINER(hbox4), button24);
	gtk_container_add(GTK_CONTAINER(hbox4), button25);
	gtk_container_add(GTK_CONTAINER(hbox4), button26);
	gtk_container_add(GTK_CONTAINER(hbox4), button27);
	gtk_container_add(GTK_CONTAINER(hbox4), button28);

	gtk_container_add(GTK_CONTAINER(hbox5), button29);
	gtk_container_add(GTK_CONTAINER(hbox5), button30);
	gtk_container_add(GTK_CONTAINER(hbox5), button31);
	gtk_container_add(GTK_CONTAINER(hbox5), button32);
	gtk_container_add(GTK_CONTAINER(hbox5), button33);
	gtk_container_add(GTK_CONTAINER(hbox5), button34);
	gtk_container_add(GTK_CONTAINER(hbox5), button35);

	gtk_container_add(GTK_CONTAINER(hbox6), button36);
	gtk_container_add(GTK_CONTAINER(hbox6), button37);
	gtk_container_add(GTK_CONTAINER(hbox6), button38);
	gtk_container_add(GTK_CONTAINER(hbox6), button39);
	gtk_container_add(GTK_CONTAINER(hbox6), button40);
	gtk_container_add(GTK_CONTAINER(hbox6), button41);
	gtk_container_add(GTK_CONTAINER(hbox6), button42);

	gtk_container_add(GTK_CONTAINER(hbox7), button43);
	gtk_container_add(GTK_CONTAINER(hbox7), button44);
	gtk_container_add(GTK_CONTAINER(hbox7), button45);
	gtk_container_add(GTK_CONTAINER(hbox7), button46);
	gtk_container_add(GTK_CONTAINER(hbox7), button47);
	gtk_container_add(GTK_CONTAINER(hbox7), button48);
	gtk_container_add(GTK_CONTAINER(hbox7), button49);

	gtk_container_add(GTK_CONTAINER(vbox), hbox1);
	gtk_container_add(GTK_CONTAINER(vbox), hbox2);
	gtk_container_add(GTK_CONTAINER(vbox), hbox3);
	gtk_container_add(GTK_CONTAINER(vbox), hbox4);
	gtk_container_add(GTK_CONTAINER(vbox), hbox5);
	gtk_container_add(GTK_CONTAINER(vbox), hbox6);
	gtk_container_add(GTK_CONTAINER(vbox), hbox7);

	gtk_container_add(GTK_CONTAINER(vbox), Donelabel);
	gtk_container_add(GTK_CONTAINER(vbox), scorelabel);
	gtk_container_add(GTK_CONTAINER(vbox1), Levellabel);
	gtk_container_add(GTK_CONTAINER(vbox1), button_H);
	gtk_container_add(GTK_CONTAINER(vbox1), button_M);
	gtk_container_add(GTK_CONTAINER(vbox1), button_L);

	gtk_container_add(GTK_CONTAINER(window), vbox);
	gtk_container_add(GTK_CONTAINER(window2), vbox1);
	gtk_container_add(GTK_CONTAINER(window3), clear_vbox);
	gtk_widget_show_all(window2);
	gtk_main();

	return 0;
}




















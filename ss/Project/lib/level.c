#include <time.h>
#include <gtk/gtk.h>
#include "define.h"
#include "define2.h"
int mine[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }; 
int level_=0;
int levelselect(GtkWidget* widget, gpointer user_data)
{
	int i = 0;
	int num = 0;
	int ran = 0;
	int *d = user_data;
	level_ = *d;
	//int *mine = user_data;
	/*if(widget == button_H)
	{
		level_ = 10;
	}
	else if (widget == button_M)
	{
		level_ = 7;
	}
	else if(widget == button_L)
	{
		level_ = 5;
	}*/
	gtk_widget_destroy((window2));
	while (1)
	{
		if (i == level_)break;
		ran = rand() % 48 + 1;
		if (mine[ran] == 0)
		{
			mine[ran] = 1;
			i++;
		}
	}
	gtk_widget_show_all(window);
	gtk_timeout_add(1000, timer, 0);
	gtk_main();
}

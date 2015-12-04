#include <time.h>
#include <gtk/gtk.h>
#include "define.h"
#include "define2.h" 
int flag;
int hour = 0;
int min = 0;
int sec = 0;
int Time = TIMEOUT;
int timer(gpointer data)
{	
	char buf[100];
	if (flag == 1){ return 0; }
	hour = Time / 3600;
	min = Time / 60 - hour * 60;
	sec = Time % 60;

	sprintf(buf, "%02d:%02d:%02d", hour, min, sec);
	gtk_label_set_text(GTK_LABEL(Timelabel), buf);
	Time = Time + 1;

}

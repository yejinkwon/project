#include <stdio.h>
#include <stdlib.h>
#include "define.h"
#include "define2.h" 

int finish_window(int mode)
{
	char buf[100];
	if (mode == 1)
	{
		flag = 1;
		sprintf(buf, "Remaining Time %02d:%02d:%02d", hour, min, sec);
		gtk_label_set_text(GTK_LABEL(clear_Timelabel), buf);
		sprintf(buf, "clear!!");
		gtk_label_set_text(GTK_LABEL(clear_scorelabel), buf);
	}
	else
	{
		sprintf(buf, "Remaining Time %02d:%02d:%02d", hour, min, sec);
		gtk_label_set_text(GTK_LABEL(clear_Timelabel), buf);
		sprintf(buf, "Game Over !!");
		gtk_label_set_text(GTK_LABEL(clear_scorelabel), buf);
	}
	gtk_widget_show_all(window3);
	gtk_main();
}

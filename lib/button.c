#include <stdio.h>
#include <gtk/gtk.h>
#include "define.h"
#include "define2.h" 
char s[1];
int score = 0;
int flag;
int mine[50];
int temp[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int buttonClicked(GtkWidget* widget, int *user_data)
{

	int r = 0;
	int l = 0;
	int u = 0;
	int f = 0;
	int ur = 0;
	int ul = 0;
	int fr = 0;
	int fl = 0;
	char buf[100];
	int *data = (int *)user_data;
	int index = *data;
	int mm;
	if (flag == 1 || temp[index] == 1)
	{
		return 0;
	}
	if (mine[index] == 1)
	{
		flag = 1;
		finish_window(0);
		return 0;
	}

	gtk_widget_set_sensitive(widget, 0);

	temp[index] = 1;

	r = index + 1;
	l = index - 1;
	u = index - 7;
	f = index + 7;
	ur = u + 1;
	ul = u - 1;
	fr = f + 1;
	fl = f - 1;
	if (index == 1)
	{
		mm = mine[r] + mine[f] + mine[fr];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button1), s);
		if (mm == 0)
		{
			buttonClicked(button2, &r);
			buttonClicked(button8, &f);
			buttonClicked(button9, &fr);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);

	}
	else if (index == 2)
	{
		mm = mine[r] + mine[l] + mine[f] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button2), s);
		if (mm == 0)
		{
			buttonClicked(button3, &r);
			buttonClicked(button1, &l);
			buttonClicked(button9, &f);
			buttonClicked(button10, &fr);
			buttonClicked(button8, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);

	}
	else if (index == 3)
	{
		mm = mine[r] + mine[l] + mine[f] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button3), s);
		if (mm == 0)
		{
			buttonClicked(button4, &r);
			buttonClicked(button2, &l);
			buttonClicked(button10, &f);
			buttonClicked(button11, &fr);
			buttonClicked(button9, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);

	}
	else if (index == 4)
	{
		mm = mine[r] + mine[l] + mine[f] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button4), s);
		if (mm == 0)
		{
			buttonClicked(button5, &r);
			buttonClicked(button3, &l);
			buttonClicked(button11, &f);
			buttonClicked(button12, &fr);
			buttonClicked(button10, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);

	}
	else if (index == 5)
	{
		mm = mine[r] + mine[l] + mine[f] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button5), s);
		if (mm == 0)
		{
			buttonClicked(button6, &r);
			buttonClicked(button4, &l);
			buttonClicked(button12, &f);
			buttonClicked(button13, &fr);
			buttonClicked(button11, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);

	}
	else if (index == 6)
	{
		mm = mine[r] + mine[l] + mine[f] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button6), s);
		if (mm == 0)
		{
			buttonClicked(button7, &r);
			buttonClicked(button5, &l);
			buttonClicked(button13, &f);
			buttonClicked(button14, &fr);
			buttonClicked(button12, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);

	}
	else if (index == 7)
	{
		mm = mine[l] + mine[f] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button7), s);
		if (mm == 0)
		{
			buttonClicked(button6, &l);
			buttonClicked(button14, &f);
			buttonClicked(button13, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 8)
	{
		mm = mine[r] + mine[u] + mine[f] + mine[ur] + mine[fr];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button8), s);
		if (mm == 0)
		{
			buttonClicked(button9, &r);
			buttonClicked(button1, &u);
			buttonClicked(button15, &f);
			buttonClicked(button2, &ur);
			buttonClicked(button16, &fr);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 9)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button9), s);
		if (mm == 0)
		{
			buttonClicked(button10, &r);
			buttonClicked(button8, &l);
			buttonClicked(button2, &u);
			buttonClicked(button16, &f);
			buttonClicked(button3, &ur);
			buttonClicked(button1, &ul);
			buttonClicked(button17, &fr);
			buttonClicked(button15, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 10)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button10), s);
		if (mm == 0)
		{
			buttonClicked(button11, &r);
			buttonClicked(button9, &l);
			buttonClicked(button3, &u);
			buttonClicked(button17, &f);
			buttonClicked(button4, &ur);
			buttonClicked(button2, &ul);
			buttonClicked(button18, &fr);
			buttonClicked(button16, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);

	}
	else if (index == 11)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button11), s);
		if (mm == 0)
		{
			buttonClicked(button12, &r);
			buttonClicked(button10, &l);
			buttonClicked(button4, &u);
			buttonClicked(button18, &f);
			buttonClicked(button5, &ur);
			buttonClicked(button3, &ul);
			buttonClicked(button19, &fr);
			buttonClicked(button17, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);

	}
	else if (index == 12)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button12), s);
		if (mm == 0)
		{
			buttonClicked(button13, &r);
			buttonClicked(button11, &l);
			buttonClicked(button5, &u);
			buttonClicked(button19, &f);
			buttonClicked(button6, &ur);
			buttonClicked(button4, &ul);
			buttonClicked(button20, &fr);
			buttonClicked(button18, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 13)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button13), s);
		if (mm == 0)
		{
			buttonClicked(button14, &r);
			buttonClicked(button12, &l);
			buttonClicked(button6, &u);
			buttonClicked(button20, &f);
			buttonClicked(button7, &ur);
			buttonClicked(button5, &ul);
			buttonClicked(button21, &fr);
			buttonClicked(button19, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 14)
	{
		mm = mine[l] + mine[u] + mine[f] + mine[ul] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button14), s);
		if (mm == 0)
		{
			buttonClicked(button13, &l);
			buttonClicked(button7, &u);
			buttonClicked(button21, &f);
			buttonClicked(button6, &ul);
			buttonClicked(button20, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);

	}
	else if (index == 15)
	{
		mm = mine[r] + mine[u] + mine[f] + mine[ur] + mine[fr];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button15), s);
		if (mm == 0)
		{
			buttonClicked(button16, &r);
			buttonClicked(button8, &u);
			buttonClicked(button22, &f);
			buttonClicked(button9, &ur);
			buttonClicked(button23, &fr);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 16)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button16), s);
		if (mm == 0)
		{
			buttonClicked(button17, &r);
			buttonClicked(button15, &l);
			buttonClicked(button9, &u);
			buttonClicked(button23, &f);
			buttonClicked(button10, &ur);
			buttonClicked(button8, &ul);
			buttonClicked(button24, &fr);
			buttonClicked(button22, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}

	else if (index == 17)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button17), s);
		if (mm == 0)
		{
			buttonClicked(button18, &r);
			buttonClicked(button16, &l);
			buttonClicked(button10, &u);
			buttonClicked(button24, &f);
			buttonClicked(button11, &ur);
			buttonClicked(button9, &ul);
			buttonClicked(button25, &fr);
			buttonClicked(button23, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);

	}
	else if (index == 18)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button18), s);
		if (mm == 0)
		{
			buttonClicked(button19, &r);
			buttonClicked(button17, &l);
			buttonClicked(button11, &u);
			buttonClicked(button25, &f);
			buttonClicked(button12, &ur);
			buttonClicked(button10, &ul);
			buttonClicked(button26, &fr);
			buttonClicked(button24, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 19)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button19), s);
		if (mm == 0)
		{
			buttonClicked(button20, &r);
			buttonClicked(button18, &l);
			buttonClicked(button12, &u);
			buttonClicked(button26, &f);
			buttonClicked(button13, &ur);
			buttonClicked(button11, &ul);
			buttonClicked(button27, &fr);
			buttonClicked(button25, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 20)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button20), s);
		if (mm == 0)
		{
			buttonClicked(button21, &r);
			buttonClicked(button19, &l);
			buttonClicked(button13, &u);
			buttonClicked(button27, &f);
			buttonClicked(button14, &ur);
			buttonClicked(button12, &ul);
			buttonClicked(button28, &fr);
			buttonClicked(button26, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 21)
	{
		mm = mine[l] + mine[u] + mine[f] + mine[ul] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button21), s);
		if (mm == 0)
		{
			buttonClicked(button20, &l);
			buttonClicked(button14, &u);
			buttonClicked(button28, &f);
			buttonClicked(button13, &ul);
			buttonClicked(button27, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}

	else if (index == 22)
	{
		mm = mine[r] + mine[u] + mine[f] + mine[ur] + mine[fr];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button22), s);
		if (mm == 0)
		{
			buttonClicked(button23, &r);
			buttonClicked(button15, &u);
			buttonClicked(button29, &f);
			buttonClicked(button16, &ur);
			buttonClicked(button30, &fr);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);

	}
	else if (index == 23)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button23), s);
		if (mm == 0)
		{
			buttonClicked(button24, &r);
			buttonClicked(button22, &l);
			buttonClicked(button16, &u);
			buttonClicked(button30, &f);
			buttonClicked(button17, &ur);
			buttonClicked(button15, &ul);
			buttonClicked(button31, &fr);
			buttonClicked(button29, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 24)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button24), s);
		if (mm == 0)
		{
			buttonClicked(button25, &r);
			buttonClicked(button23, &l);
			buttonClicked(button17, &u);
			buttonClicked(button31, &f);
			buttonClicked(button18, &ur);
			buttonClicked(button16, &ul);
			buttonClicked(button32, &fr);
			buttonClicked(button30, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 25)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button25), s);
		if (mm == 0)
		{
			buttonClicked(button26, &r);
			buttonClicked(button24, &l);
			buttonClicked(button18, &u);
			buttonClicked(button32, &f);
			buttonClicked(button19, &ur);
			buttonClicked(button17, &ul);
			buttonClicked(button33, &fr);
			buttonClicked(button31, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 26)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button26), s);
		if (mm == 0)
		{
			buttonClicked(button27, &r);
			buttonClicked(button25, &l);
			buttonClicked(button19, &u);
			buttonClicked(button33, &f);
			buttonClicked(button20, &ur);
			buttonClicked(button18, &ul);
			buttonClicked(button34, &fr);
			buttonClicked(button32, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 27)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button27), s);
		if (mm == 0)
		{
			buttonClicked(button28, &r);
			buttonClicked(button26, &l);
			buttonClicked(button20, &u);
			buttonClicked(button34, &f);
			buttonClicked(button21, &ur);
			buttonClicked(button19, &ul);
			buttonClicked(button35, &fr);
			buttonClicked(button33, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 28)
	{
		mm = mine[l] + mine[u] + mine[f] + mine[ul] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button28), s);
		if (mm == 0)
		{
			buttonClicked(button27, &l);
			buttonClicked(button21, &u);
			buttonClicked(button35, &f);
			buttonClicked(button20, &ul);
			buttonClicked(button34, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 29)
	{
		mm = mine[r] + mine[u] + mine[f] + mine[ur] + mine[fr];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button29), s);
		if (mm == 0)
		{
			buttonClicked(button30, &r);
			buttonClicked(button22, &u);
			buttonClicked(button36, &f);
			buttonClicked(button23, &ur);
			buttonClicked(button37, &fr);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 30)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button30), s);
		if (mm == 0)
		{
			buttonClicked(button31, &r);
			buttonClicked(button29, &l);
			buttonClicked(button23, &u);
			buttonClicked(button37, &f);
			buttonClicked(button24, &ur);
			buttonClicked(button22, &ul);
			buttonClicked(button38, &fr);
			buttonClicked(button36, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 31)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button31), s);
		if (mm == 0)
		{
			buttonClicked(button32, &r);
			buttonClicked(button30, &l);
			buttonClicked(button24, &u);
			buttonClicked(button38, &f);
			buttonClicked(button25, &ur);
			buttonClicked(button23, &ul);
			buttonClicked(button39, &fr);
			buttonClicked(button37, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 32)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button32), s);
		if (mm == 0)
		{
			buttonClicked(button33, &r);
			buttonClicked(button31, &l);
			buttonClicked(button25, &u);
			buttonClicked(button39, &f);
			buttonClicked(button26, &ur);
			buttonClicked(button24, &ul);
			buttonClicked(button40, &fr);
			buttonClicked(button38, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 33)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button33), s);
		if (mm == 0)
		{
			buttonClicked(button34, &r);
			buttonClicked(button32, &l);
			buttonClicked(button26, &u);
			buttonClicked(button40, &f);
			buttonClicked(button27, &ur);
			buttonClicked(button25, &ul);
			buttonClicked(button41, &fr);
			buttonClicked(button39, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 34)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button34), s);
		if (mm == 0)
		{
			buttonClicked(button35, &r);
			buttonClicked(button33, &l);
			buttonClicked(button27, &u);
			buttonClicked(button41, &f);
			buttonClicked(button28, &ur);
			buttonClicked(button26, &ul);
			buttonClicked(button42, &fr);
			buttonClicked(button40, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 35)
	{
		mm = mine[l] + mine[u] + mine[f] + mine[ul] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button35), s);
		if (mm == 0)
		{
			buttonClicked(button34, &l);
			buttonClicked(button28, &u);
			buttonClicked(button42, &f);
			buttonClicked(button27, &ul);
			buttonClicked(button41, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 36)
	{
		mm = mine[r] + mine[u] + mine[f] + mine[ur] + mine[fr];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button36), s);
		if (mm == 0)
		{
			buttonClicked(button37, &r);
			buttonClicked(button29, &u);
			buttonClicked(button43, &f);
			buttonClicked(button30, &ur);
			buttonClicked(button44, &fr);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 37)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button37), s);
		if (mm == 0)
		{
			buttonClicked(button38, &r);
			buttonClicked(button36, &l);
			buttonClicked(button30, &u);
			buttonClicked(button44, &f);
			buttonClicked(button31, &ur);
			buttonClicked(button29, &ul);
			buttonClicked(button45, &fr);
			buttonClicked(button43, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 38)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button38), s);
		if (mm == 0)
		{
			buttonClicked(button39, &r);
			buttonClicked(button37, &l);
			buttonClicked(button31, &u);
			buttonClicked(button45, &f);
			buttonClicked(button32, &ur);
			buttonClicked(button30, &ul);
			buttonClicked(button46, &fr);
			buttonClicked(button44, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 39)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button39), s);
		if (mm == 0)
		{
			buttonClicked(button40, &r);
			buttonClicked(button38, &l);
			buttonClicked(button32, &u);
			buttonClicked(button46, &f);
			buttonClicked(button33, &ur);
			buttonClicked(button31, &ul);
			buttonClicked(button47, &fr);
			buttonClicked(button45, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 40)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button40), s);
		if (mm == 0)
		{
			buttonClicked(button41, &r);
			buttonClicked(button39, &l);
			buttonClicked(button33, &u);
			buttonClicked(button47, &f);
			buttonClicked(button34, &ur);
			buttonClicked(button32, &ul);
			buttonClicked(button48, &fr);
			buttonClicked(button46, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 41)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[f] + mine[ur] + mine[ul] + mine[fr] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button41), s);
		if (mm == 0)
		{
			buttonClicked(button42, &r);
			buttonClicked(button40, &l);
			buttonClicked(button34, &u);
			buttonClicked(button48, &f);
			buttonClicked(button35, &ur);
			buttonClicked(button33, &ul);
			buttonClicked(button49, &fr);
			buttonClicked(button47, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 42)
	{
		mm = mine[l] + mine[u] + mine[f] + mine[ul] + mine[fl];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button42), s);
		if (mm == 0)
		{
			buttonClicked(button41, &l);
			buttonClicked(button35, &u);
			buttonClicked(button49, &f);
			buttonClicked(button34, &ul);
			buttonClicked(button48, &fl);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 43)
	{
		mm = mine[r] + mine[u] + mine[ur];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button43), s);
		if (mm == 0)
		{
			buttonClicked(button44, &r);
			buttonClicked(button36, &u);
			buttonClicked(button37, &ur);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 44)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[ur] + mine[ul];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button44), s);
		if (mm == 0)
		{
			buttonClicked(button45, &r);
			buttonClicked(button43, &l);
			buttonClicked(button37, &u);
			buttonClicked(button38, &ur);
			buttonClicked(button36, &ul);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 45)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[ur] + mine[ul];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button45), s);
		if (mm == 0)
		{
			buttonClicked(button46, &r);
			buttonClicked(button44, &l);
			buttonClicked(button38, &u);
			buttonClicked(button39, &ur);
			buttonClicked(button37, &ul);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 46)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[ur] + mine[ul];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button46), s);
		if (mm == 0)
		{
			buttonClicked(button47, &r);
			buttonClicked(button45, &l);
			buttonClicked(button39, &u);
			buttonClicked(button40, &ur);
			buttonClicked(button38, &ul);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 47)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[ur] + mine[ul];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button47), s);
		if (mm == 0)
		{
			buttonClicked(button48, &r);
			buttonClicked(button46, &l);
			buttonClicked(button40, &u);
			buttonClicked(button41, &ur);
			buttonClicked(button39, &ul);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 48)
	{
		mm = mine[r] + mine[l] + mine[u] + mine[ur] + mine[ul];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button48), s);
		if (mm == 0)
		{
			buttonClicked(button49, &r);
			buttonClicked(button47, &l);
			buttonClicked(button41, &u);
			buttonClicked(button42, &ur);
			buttonClicked(button40, &ul);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	else if (index == 49)
	{
		mm = mine[l] + mine[u] + mine[ul];
		sprintf(s, "%d", mm);
		gtk_button_set_label(GTK_BUTTON(button49), s);
		if (mm == 0)
		{
			buttonClicked(button48, &l);
			buttonClicked(button42, &u);
			buttonClicked(button41, &ul);
			score++;
		}
		
		sprintf(buf, "score :%d", score);
		gtk_label_set_text(GTK_LABEL(scorelabel), buf);
	}
	if (checkFinish() == 1)
	{
		finish_window(1);
		return 0;
	}
}

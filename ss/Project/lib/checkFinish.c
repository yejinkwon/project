#include <stdio.h>
#include "define.h"

int temp[50]; 
int level_;
int checkFinish()  
{ 
	int i = 0;
	int count = 0;
	for (i = 1; i<50; i++)
	{
		if (temp[i] == 0)
		{
			count++;
		}
	}
	if (count == level_)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

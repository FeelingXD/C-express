#include <stdio.h>
extern info[][];
void clear()
{
	int i,j,k = 0;
	int temp=0;
	for(i=0;i<200;i++)
		for  (j = 1; j <200; j++)
		{
			if (info[i][0] > info[j][0])
			{
				for(k=0;k<5;k++)
				
				temp = info[j][k];
				info[j][k] = info[i][k];
				info[i][k] = temp;
			}
		}
}
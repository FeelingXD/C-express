#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i;
	char cmd[40];

	for (i = 1; i < 255; i++)
	{
		sprintf(cmd, "ping -c 1 112.187.114.%d", i);
		system(cmd);
	}
}
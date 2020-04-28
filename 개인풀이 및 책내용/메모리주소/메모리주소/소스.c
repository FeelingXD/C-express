#include <stdio.h>

int main()
{
	float a[100];
	int *numarr = a;
	
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", &a[i]);
	}
	system("pause");
}
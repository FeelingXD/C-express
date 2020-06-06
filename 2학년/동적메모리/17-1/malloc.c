#include <stdio.h>

int main(void)
{

	int* list;
	list = malloc(3*sizeof(int));

	list[0] = 10;
	list[1] = 20;
	list[2] = 30;

	for (int i = 0; i < 3; i++)
	{
		printf("list [%d]:  %d \n",i, list[i]);
	}
}
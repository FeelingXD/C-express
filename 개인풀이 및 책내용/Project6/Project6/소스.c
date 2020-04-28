#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int sum = 0;
	int i = 0;
	scanf("%d", &i);
	for (i; 1<=i; i--)
	{
		sum = sum + i;
	}

	printf("%d", sum);
	getchar();
	system("pause");
	return 0;
}
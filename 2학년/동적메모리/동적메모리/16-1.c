#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double power(int x, int y)
{
	double result = 1.0;

	int i;
	for (i=0;i<y;i++)
	{
		result *= x;
	}
	return result;
}
int main(void)
{
	int x, y;
	printf("x�� ���� �Է��Ͻÿ�\n");
	scanf("%d", &x);
	printf("y�� ���� �Է��Ͻÿ�\n");
	scanf("%d", &y);

	printf("%d�� %d �������� %f \n",x, y, power(x, y));

	return 0;
}
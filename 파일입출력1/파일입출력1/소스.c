#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fp = NULL;//  ���� fp �� �޸������� ���� 
	fp = fopen("sample.txt", "w");
	if (fp == NULL)
	{
		printf("���� ���� ����");
	}
	else
		printf("���� ���� ����");
	fclose(fp);

	getchar();
	return 0;

}
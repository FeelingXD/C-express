#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE*fp = NULL;
	fp = fopen("sample.txt", "w");
	if (fp == NULL)
	{
		printf("���� ���� \n");
	}
	else
		printf("���� ����\n");

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	
	fclose(fp);
	int c;
	
	fp = fopen("sample.txt", "r");
	if (fp == NULL)
		printf("���Ͽ��� ����\n");
	else
		printf("���� ���� ����\n");
	while ((c =fgetc(fp))!= EOF)
	{
		putchar(c);
	}
	fclose(fp);
	getchar();

	return 0;
}
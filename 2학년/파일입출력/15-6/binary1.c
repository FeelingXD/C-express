#define _CRT_SECURE_NO_WARNINGS
#define size 5
#include <stdio.h>
int main()
{
	int buffer[size] = { 10,20,30,40,50 };
	FILE* fp = NULL;
	fp = fopen("binary.bin", "wb");
	if (fp == NULL)
	{
		fprintf(stderr, "���� binary.bin�� ���������ϴ�.");
		exit(1);
	}

	fwrite(buffer, sizeof(int), size, fp);

	return 0;
}
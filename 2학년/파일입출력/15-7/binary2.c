#define _CRT_SECURE_NO_WARNINGS
#define size 5
#include <stdio.h>

int main()
{
	int i;
	int buffer[size];
	FILE* fp;
	fp = fopen("binary.bin", "rb");
	if (fp == NULL)
	{
		fprintf(stderr, "���� binary.bin ������ ���������ϴ�.");
		exit(1);
	}
	fread(buffer, sizeof(int), size, fp);

	for (i = 0; i < size; i++)
		printf("%d", buffer[i]);
	fclose(fp);
	return 0;
}
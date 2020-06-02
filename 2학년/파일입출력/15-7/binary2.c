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
		fprintf(stderr, "파일 binary.bin 파일을 열수없습니다.");
		exit(1);
	}
	fread(buffer, sizeof(int), size, fp);

	for (i = 0; i < size; i++)
		printf("%d", buffer[i]);
	fclose(fp);
	return 0;
}
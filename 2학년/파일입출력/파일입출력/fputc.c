#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp=NULL;
	fp = fopen("sample.txt", "w");
	if (fp == NULL)printf("파일열기 실패");
	else
		printf("파일 열기 성공");

	fputc('a', fp);
	fputc('b', fp);
	fputc('c', fp);
	fputc('d', fp);
	
	fclose(fp);

	return 0;

}
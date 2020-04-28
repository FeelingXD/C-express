#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *fp = NULL;//  파일 fp 의 메모리지정을 없음 
	fp = fopen("sample.txt", "w");
	if (fp == NULL)
	{
		printf("파일 열기 실패");
	}
	else
		printf("파일 열기 성공");
	fclose(fp);

	getchar();
	return 0;

}
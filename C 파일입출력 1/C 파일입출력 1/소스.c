#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE*fp = NULL;
	fp = fopen("sample.txt", "w"); // 읽기모드로 sample.txt 를 연다. 없을경우 새로만듬
	if (fp == NULL)
	{
		printf("파일읽기 실패");
	}
	else
		printf("파일열기 성공\n");
	fclose(fp); //파일을 열어으면 반드시 닫아주어야한다.
	getchar();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	FILE *fp;
	char fname[128];
	char buffer[256];
	char word[256];
	int line_num = 0;

	printf("입력 파일 이름을 입력하시오: ");
	scanf("%s", fname);
	printf("탐색한 단어를 입력하시오: ");
	printf("%s", word);
	
	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "파일 %s을 열 수 없습니다.\n", fname);
		exit(1);
	}

	while (fgets(buffer, 256, fp))
	{
		line_num++;
		if (strstr(buffer, word))
			printf("%s: %d 단어 %s 이발견되었습니다.\n", fname, line_num, word);
		fclose(fp);
	}

	getchar();

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	FILE* fp;
	char fname[100];
	char buffer[250];
	char word[256];
	
	int line_num = 0;

	printf("입력파일 이름을 을 입력하세요:");
	scanf("%s", fname);

	printf("탐색할 단어를 입력하세요 :");
	scanf("%s", word);

	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "파일 %s 를 열수없습니다.", fname);
		exit(1);
	}
	while (fgets(buffer, 256, fp)) {
		line_num++;
		if (strstr(buffer, word)) {
			printf("%s : %d 라인에서 단어 %s 가 발견되었습니다.\n", fname, line_num, word);
		}
	}

	fclose(fp);
	return 0;
}
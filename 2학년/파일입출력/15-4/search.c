#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

	FILE* fp;
	char fname[100];
	char buffer[250];
	char word[256];
	
	int line_num = 0;

	printf("�Է����� �̸��� �� �Է��ϼ���:");
	scanf("%s", fname);

	printf("Ž���� �ܾ �Է��ϼ��� :");
	scanf("%s", word);

	if ((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "���� %s �� ���������ϴ�.", fname);
		exit(1);
	}
	while (fgets(buffer, 256, fp)) {
		line_num++;
		if (strstr(buffer, word)) {
			printf("%s : %d ���ο��� �ܾ� %s �� �߰ߵǾ����ϴ�.\n", fname, line_num, word);
		}
	}

	fclose(fp);
	return 0;
}
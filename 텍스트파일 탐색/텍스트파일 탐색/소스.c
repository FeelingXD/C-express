#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {


	FILE*fp;
	char fname[128];
	char buffer[256];
	char word[256];
	int line_num = 0;


	printf("�Է� ���� �̸��� �Է��Ͻÿ� : ");
	scanf("%s", fname);
	
	
	printf("Ž���� �ܾ �Է��Ͻÿ� : ");
	scanf("%s", word);

	if ((fp = fopen(fname, "r")) == NULL) {

		printf("���� %s�� ���������ϴ�.\n", fname);
		system("pause");
		exit(1);
	}
	while (fgets(buffer, 256, fp)){
		line_num++;
		if (strstr(buffer, word)) {
			printf("%s : %d��°�ٿ��� �ܾ� %s�� �߰ߵǾ����ϴ�.\n", fname, line_num, word);

		}
	}
	fclose(fp);
	printf("20174222 ������");
	system("pause");

	
	return 0;
}
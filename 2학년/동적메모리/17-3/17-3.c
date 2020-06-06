#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct book {
	int number;
	char title[50];
};
int main(void)
{
	struct book* p;
	p = malloc(sizeof(struct book));
	if (p == NULL)
	{
		printf("메모리 할당 오류");
		exit(1);
	}
	p[0].number = 1;
	strcpy(p[0].title, "C Programming");

	p[1].number = 2;
	strcpy(p[1].title, "Data Structure");

	printf("책번호는 %d 책 이름은 %s 입니다.\n", p[0].number, p[0].title);
	printf("책번호는 %d 책 이름은 %s 입니다.\n", p[1].number, p[1].title);

	free(p);

	return 0;

}
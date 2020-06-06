#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 50

typedef struct NODE {
	char title[size];
	int year;
	struct NODE* link;
}NODE;
int main()
{
	NODE* list = NULL;
	NODE* prev, * p, * next;
	char buffer[size];
	int year;
	prev = NULL;
	while (1) {
		printf("å�� ������ �Է��Ͻÿ� : (�����Ϸ��� ����)");
		gets(buffer);
		if (buffer[0] == '\0')break;
		p = malloc(sizeof(NODE));
		strcpy(p->title, buffer);
		printf("å�� ���ǿ����� �Է��Ͻÿ� :");
		gets(buffer);
		year = atoi(buffer);
		p->year = year;

		if (list == NULL) list = p;
		else prev->link = p;

		p->link = NULL;
		prev = p;
	}
	printf("\n");
	p = list;
	while (p != NULL)
	{
		printf("å�� ���� :%s ���ǿ��� : %d \n", p->title, p->year);
		p = p->link;
	}
	p = list;
	while (p != NULL)
	{
		next = p->link;
		free(p);
		p = next;
	}
}
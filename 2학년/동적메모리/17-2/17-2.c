#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, students;
	int* list;
	students = 0;

	printf("�л��Ǽ� : ");
	scanf("%d", &students);

	list = malloc(students * sizeof(int));
	if (list == NULL)
	{
		printf("���� �޸� �Ҵ� ����\n");
		exit(1);
	}
	for (i = 0; i < students; i++)
	{
		printf("�л��� %d�� ����", i + 1);
		scanf("%d", &list[i]);
	}
	for (i = 0; i < students; i++)
	{
		printf("�л� #%d ����: %d \n", i + 1, list[i]);
	}
	printf("================================\n\n");

	free(list);
	return 0;
	
}
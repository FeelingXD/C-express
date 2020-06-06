#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, students;
	int* list;
	students = 0;

	printf("학생의수 : ");
	scanf("%d", students);

	list = malloc(students * sizeof(int));
	if (list == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	for (i = 0; i < students; i++)
	{
		printf("학생의 %d의 성적", i + 1);
		scanf("%d", &list[i]);
	}
	for (i = 0; i < students; i++)
	{
		printf("학생 #%d 성적: %d \n", i + 1, list[i]);
	}
	printf("================================\n\n");

	free(list);
	return 0;
	
}
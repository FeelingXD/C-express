#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int menu();
int input();
int del();
int search();
int main()
{
	int i;
	system("cls");
	while (1)
	{5
		system("cls");
		menu();
		scanf("%d", &i);
		if (i == 1)
		{
			input();
		}
		else if (i == 2)
		{
			del();
		}
		else if (i == 3)
		{
			search();
		}
		else if (i == 4)
			break;
	}
	return 0;
}
int menu()
{	
		printf("������ �޴� ����:\n");
		printf("1.�Է�\n");
		printf("2.����\n");
		printf("3.�˻�\n");
		printf("4.����\n");
		return 0;
}
int input()
{

}
int del()
{

}
int search()
{

}
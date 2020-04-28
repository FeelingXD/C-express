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
		printf("실행할 메뉴 선택:\n");
		printf("1.입력\n");
		printf("2.삭제\n");
		printf("3.검색\n");
		printf("4.종료\n");
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
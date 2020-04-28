#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 200
#define SIZE 5
int menu();
extern input();
extern list();
extern search();
extern del();
int info[STUDENTS][SIZE];
extern load();
extern save();
int main()
{
	system("cls");
	if (load == NULL);//데이터파일 불러오기
	{
		int i = 5;
		int j = 200;

		for (j = 0; j<STUDENTS; j++)
			for (i = 0; i < SIZE; i++)
			{
				info[j][i] = 0;
			}


	}

	int cho;
	while (1)
	{

		cho = menu();
		if (cho == 1) // 검색(학번)
		{
			search();

			system("PAUSE");
			system("cls");
		}
		else if (cho == 2)//성적입력(수정)
		{
			input();
			system("PAUSE");
			system("cls");
		}
		else if (cho == 3)//전체 성적조회(오름차순)
		{
			list();
			system("PAUSE");
			system("cls");

		}
		else if (cho == 4)//데이터 삭제
		{
			del();
			system("PAUSE");
			system("cls");
		}
		else if (cho == -1) //프로그램 종료

			break;
		else
			continue;
	}
	system("PAUSE");
	return 0;

}
int menu()//메인메뉴
{
	int cho;
	cho = 0;
	printf("\n\n\n================================================\n");
	printf("메뉴\n");
	printf("1.학생 성적검색\n");
	printf("2.학생 성적입력(수정)\n");
	printf("3.전체 성적조회\n");
	printf("4.성적데이터 삭제\n");
	printf("'-1' 입력시 프로그램종료.\n");
	printf("================================================\n\n\n\n");

	scanf("%d", &cho);
	return cho;
}

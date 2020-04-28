#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 200
#define SIZE 5
extern info[STUDENTS][SIZE];
int search()//학번검색
{
	char op;
	int j;
	int i;
	int W = 0;//검색값

	printf("학번을 입력해주세요:\n");
	scanf("%d", &W);
	for (i = 0; i < 200; i++)
	{
		info[i][0];
		if (info[i][0] == W)
		{
			{
			printf("학번:%d  국어:%d  수학:%d  영어:%d  평균:%d\n\n\n\n", info[i][0], info[i][1], info[i][2], info[i][3], (info[i][2] + info[i][1] + info[i][3]) / 3);
			
			}
			return 0;
		}
	}
	printf("검색불가\n\n\n\n");
	return 0;
}
int input()//학생성적입력
{
	int que1 = 0;
	int i = 0;

	printf("학번을입력해주세요:\n");
	scanf("%d", &que1);

	for (i = 0; i < 200; i++)//먼저 선언된 정보와 비교 수정
	{
		if (que1 == info[i][0])
		{
			printf("수정될 국어성적 수학성적 영어성적 을 입력해주세요:\n");
			scanf(" %d %d %d", &info[i][1], &info[i][2], &info[i][3]);
			return 0;
		}
	}
	for (i = 0; i < 200; i++)//메모리 빈칸찾기
	{
		if (info[i][0] == NULL)
		{
			info[i][0] = que1;
			break;
		}
		if (i == 200)
		{
			printf("저장공간이 가득찻습니다!\n");
			return 0;
		}
	}

	printf(" 국어성적 수학성적 영어성적 을 입력해주세요:\n");
	scanf(" %d %d %d", &info[i][1], &info[i][2], &info[i][3]);
	return 0;
}
int list()
{

	int i = 0;
	int j = 0;
	int	k = 0;
	int temp = 0;
	int num = 1;
	int sum_lang = 0, sum_eng = 0, sum_math = 0;
	printf("전체성적을 조회합니다.\n\n");
	for (i = 0; i < 200; i++)
		for (j = i + 1; j < 200; j++)
		{
			if (info[i][0] > info[j][0])
			{
				for (k = 0; k < 4; k++)

				{
					temp = info[j][k];
					info[j][k] = info[i][k];
					info[i][k] = temp;
				}
			}
		}
	for (i = 0; i < 200; i++)
		if (info[i][0] != NULL)
		{
			sum_lang = info[i][1] + sum_lang;
			sum_math = info[i][2] + sum_math;
			sum_eng = info[i][3] + sum_eng;
			printf("%d.  학번:%d  국어:%d  수학:%d  영어:%d  평균:%d\n\n\n\n", num, info[i][0], info[i][1], info[i][2], info[i][3], (info[i][2] + info[i][1] + info[i][3]) / 3);
			num++;
		}
	if ((sum_lang&&sum_eng&&sum_math) != NULL)
	{
		printf("국어평균 : %d   영어평균 : %d    수학평균 : %d\n\n\n", (sum_lang) / (num - 1), (sum_eng) / (num - 1), (sum_math) / (num - 1));
	return 0;
	}
	else
	{
		printf("입력된 성적데이터가 없습니다.!");
		return 0;
	}
}
int del()
{
	int i, j;
	int que1=0;
	printf("데이터를 지울 학번을 입력해주세요:");
	scanf("%d", &que1);
	for (i = 0; i < 200; i++)//먼저 선언된 정보와 비교 수정
	{
		if (info[i][0] == que1)
		{
			for (j = 0; j < 5; j++)
			{
				info[i][j] = 0;
			}
			printf("삭제되었습니다.\n");
			return 0;
		}
	}
	printf("데이터가 없습니다.");
	
}
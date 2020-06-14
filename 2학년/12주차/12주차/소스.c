#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int j;
void print_info(char a[]);
void print_info2(char a[]);
int main()
{

	char jumin[] = "990612-1567712";
	char hyphen = '-';
	
	int index = strchr(jumin, hyphen);
	
	char jumin_front[7] = {0,};
	char jumin_back[8] = {0,};

	for (int i=0;i<6 ;i++)
	{
		jumin_front[i] = jumin[i];
	}

	for (int i = 0; i<7; i++)
	{
		jumin_back[i] = jumin[i +7];
	}
	printf("%s\n", jumin_front);
	print_info(jumin_front);
	printf("%s\n", jumin_back);
	print_info2(jumin_back);

	return 0;
}
void print_info(char a[]) {

	printf("연도 : %c%c 년\n", a[0], a[1]);
	printf("월 : %c%c 월\n", a[2], a[3]);
	printf("일 : %c%c  일\n", a[4], a[5]);

}
void print_info2(char a[]) {

	printf("성별 및 연도 : %c \n", a[0] );
	printf("읍,면,동 고유번호 : %c%c%c%c \n", a[1], a[2],a[3],a[4]);
	printf("신고순서에따른 일련번호 : %c  \n", a[5]);
	printf("검증번호 : %c  \n", a[6]);

}
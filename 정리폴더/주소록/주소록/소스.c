#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
typedef struct person {
	char name[SIZE];
	char adress[SIZE];
	char mobilephone[SIZE];
	char desc[SIZE];
}PERSON;
void menu();
PERSON get_record();
void print_record(FILE *fp);
void add_record(FILE *fp);
void search_record(FILE *fp);
void update_record(FILE *fp);

int main() {

	FILE *fp;
	fp = fopen("address.dat" , "w+");
	if (fp == NULL) {
		printf("파일을 열수없습니다.");
		exit(1);
	}
	fclose(fp);
	while (1)
	{	
		int c;
		menu();
		pritnf("사용할 옵션 :");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			
		case 2:

		case 3:

		case 4:
			return 0;

			
		}
	}

}
void menu()
{
		printf("==============================\n");
		printf("1");
		printf("2");
		printf("3");
		printf("4");
		printf("=============================\n");
}
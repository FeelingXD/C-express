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
int search_record(FILE *fp);
void update_record(FILE *fp);
int main() {

	FILE *fp;
	fp = fopen("address.dat" , "w+");
	if (fp == NULL) {
		printf("파일을 열수없습니다.\n");
		exit(1);
	}
	fclose(fp);
	fp = fopen("address.dat", "r+");
	while (1)
	{	
		int c;
		menu();
		printf("사용할 옵션 :");
		scanf("%d", &c);
		
		switch (c)
		{
		case 1:
			add_record(fp); break;
		case 2:
			update_record(fp); break;
		case 3:
			search_record(fp); break;
		case 4:
			printf("20174222 고지민\n");
			system("pause");
			fclose(fp);
			return 0;
		}
	}

}
void menu()
{
		printf("==============================\n");
		printf("1. 추가\n");
		printf("2. 수정\n");
		printf("3. 검색\n");
		printf("4. 종료\n");
		printf("=============================\n");
}
PERSON get_record()
{
	
	PERSON data;
	getchar();
	printf("이름 :");	gets(data.name);
	printf("주소 :");	gets(data.adress);
	printf("휴대폰 :");	gets(data.mobilephone);
	printf("특징 :");	gets(data.desc);
	
	return data;
}
void add_record(FILE *fp)
{
	PERSON data;
	data = get_record();
	fseek(fp, 0, SEEK_END);
	fwrite(&data, sizeof(data), 1, fp);
	

}
void print_record(PERSON data)
{
	printf("이름 : %s\n", data.name); printf("주소 : %s\n", data.adress);
	printf("휴대폰 : %s\n", data.mobilephone); printf("특징: %s\n", data.desc);
}
int search_record(FILE *fp)
{
	char name[SIZE];
	PERSON data;

	fseek(fp, 0, SEEK_SET);
	getchar();
	printf("검색할 사람이름 ");
	gets(name);
	while (!feof(fp))
	{
		fread(&data, sizeof(data), 1, fp);
		if (strcmp(data.name, name) == 0)
		{
			print_record(data);
			break;
		}
		else
		{
			printf("없음 \n");
			break;
		}
	}

}
void update_record(FILE *fp)
{
	int loc = search_record(fp);





}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 200
#define SIZE 5
extern load();
extern save();
struct student {
	int number;
	int lang;
	int eng;
	int math;
};
int main()
{
	system("cls");
	struct  student list[STUDENTS]{ 0 };
	
	
	int cho;
	while (1)
	{

		cho = menu();
		if (cho == 1) // �˻�(�й�)
		{
			search();
		}
		else if (cho == 2)//�����Է�(����)
		{
			input();
		}
		else if (cho == 3)//��ü ������ȸ(��������)
		{
			list();

		}
		else if (cho == 4)//������ ����
		{
			del();
		}
		else if (cho == -1) //���α׷� ����

			break;
		else
			continue;
	}
	system("PAUSE");
	return 0;

}
int menu()//���θ޴�
{	
	int cho;
	cho = 0;
	printf("\n\n\n-------------------\n");
	printf("�޴�\n");
	printf("1.�л� �����˻�\n");
	printf("2.�л� �����Է�(����)\n");
	printf("3.��ü ������ȸ\n");
	printf("4.���������� ����\n");
	printf("'-1' �Է½� ���α׷�����.\n");
	printf("--------------------\n\n\n\n");

	scanf("%d" ,&cho);
	return cho;
}
void printstudent(struct student p)


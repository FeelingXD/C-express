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
	if (load == NULL);//���������� �ҷ�����
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
		if (cho == 1) // �˻�(�й�)
		{
			search();

			system("PAUSE");
			system("cls");
		}
		else if (cho == 2)//�����Է�(����)
		{
			input();
			system("PAUSE");
			system("cls");
		}
		else if (cho == 3)//��ü ������ȸ(��������)
		{
			list();
			system("PAUSE");
			system("cls");

		}
		else if (cho == 4)//������ ����
		{
			del();
			system("PAUSE");
			system("cls");
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
	printf("\n\n\n================================================\n");
	printf("�޴�\n");
	printf("1.�л� �����˻�\n");
	printf("2.�л� �����Է�(����)\n");
	printf("3.��ü ������ȸ\n");
	printf("4.���������� ����\n");
	printf("'-1' �Է½� ���α׷�����.\n");
	printf("================================================\n\n\n\n");

	scanf("%d", &cho);
	return cho;
}

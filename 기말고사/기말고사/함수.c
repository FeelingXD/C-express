#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 200
#define SIZE 5
extern info[STUDENTS][SIZE];
int search()//�й��˻�
{
	char op;
	int j;
	int i;
	int W = 0;//�˻���
	printf("�й��˻������ �����մϴ�.\n\n");
	printf("����������������������������������������������������\n");
	printf("�й��� �Է����ּ���:\n");
	scanf("%d", &W);
	for (i = 0; i < 200; i++)
	{
		info[i][0];
		if (info[i][0] == W)
		{
			{
				printf("\n\n�й�:%d  ����:%d  ����:%d  ����:%d  ���:%d\n\n\n\n", info[i][0], info[i][1], info[i][2], info[i][3], (info[i][2] + info[i][1] + info[i][3]) / 3);
				printf("����������������������������������������������������\n");
			}
			return 0;
		}
	}
	printf("\n\n�˻��Ұ�\n\n\n\n");
	printf("����������������������������������������������������\n");
	return 0;
}//�˻�
int input()//�л������Է�
{
	int que1 = 0;
	int i = 0;
	printf("�л����� �Է±���� �����մϴ�.\n\n");
	printf("����������������������������������������������������\n");
	printf("             �й����Է����ּ���:\n\n");
	scanf("%d", &que1);

	for (i = 0; i < 200; i++)//���� ����� ������ �� ����
	{
		if (que1 == info[i][0])
		{
			printf("������ ����� ���м��� ����� �� �Է����ּ���:\n");
			scanf(" %d %d %d", &info[i][1], &info[i][2], &info[i][3]);
			return 0;
		}
	}
	for (i = 0; i < 200; i++)//�޸� ��ĭã��
	{
		if (info[i][0] == NULL)
		{
			info[i][0] = que1;
			break;
		}
		if (i == 200)
		{
			printf("             ��������� ���������ϴ�!\n");
			printf("����������������������������������������������������\n");
			return 0;
		}
	}

	printf(" ����� ���м��� ����� �� �Է����ּ���:\n");
	scanf(" %d %d %d", &info[i][1], &info[i][2], &info[i][3]);
	printf("����������������������������������������������������\n");
	return 0;
}//�Է�(����)
int list()//����Ʈ
{

	int i = 0;
	int j = 0;
	int	k = 0;
	int temp = 0;
	int num = 1;
	int sum_lang = 0, sum_eng = 0, sum_math = 0;
	printf("��ü������ ��ȸ�մϴ�.\n\n");
	printf("����������������������������������������������������\n");
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
	printf("  ================================================\n\n");
	for (i = 0; i < 200; i++)
	{
		if (info[i][0] != NULL)
		{
			sum_lang = info[i][1] + sum_lang;
			sum_math = info[i][2] + sum_math;
			sum_eng = info[i][3] + sum_eng;
			printf("%d.  �й�:%d  ����:%d  ����:%d  ����:%d  ���:%d\n\n\n\n", num, info[i][0], info[i][1], info[i][2], info[i][3], (info[i][2] + info[i][1] + info[i][3]) / 3);
			num++;
		}
	}
	if (num >1)
	{
		printf("������� : %d   ������� : %d     �������: %d\n\n\n", (sum_lang) / (num - 1), (sum_math) / (num - 1), (sum_eng) / (num - 1));
		printf("����������������������������������������������������");
		return 0;
	}
	else if (num == 1)
	{
		printf("                �����Ͱ� �����ϴ�.!\n\n\n");
		printf("����������������������������������������������������\n");

		return 0;
	}
}//����Ʈ()
int del()//����
{
	int i, j;
	int que1 = 0;
	printf("����������������������������������������������������\n");
	printf("        �����͸� ���� �й��� �Է����ּ���:");
	scanf("%d", &que1);
	for (i = 0; i < 200; i++)//���� ����� ������ �� ����
	{
		if (info[i][0] == que1)
		{
			for (j = 0; j < 5; j++)
			{
				info[i][j] = 0;
			}
			printf("                �����Ǿ����ϴ�.\n");
			printf("����������������������������������������������������\n");
			return 0;
		}
	}
	printf("              �����Ͱ� �����ϴ�.\n");
	printf("����������������������������������������������������");

}//����
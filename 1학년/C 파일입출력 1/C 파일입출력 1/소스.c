#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE*fp = NULL;
	fp = fopen("sample.txt", "w"); // �б���� sample.txt �� ����. ������� ���θ���
	if (fp == NULL)
	{
		printf("�����б� ����");
	}
	else
		printf("���Ͽ��� ����\n");
	fclose(fp); //������ �������� �ݵ�� �ݾ��־���Ѵ�.
	getchar();
	return 0;
}
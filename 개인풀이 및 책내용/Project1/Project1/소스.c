#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int length;//����
int loc; //���� �迭 ��ġ 
int value;// ���� �� 
void insult(int n[], int loc, int value) {
	int temp; // �ӽ����尪
	loc = loc - 1;
	for (int item = loc + 1; item <= length; item++){
		temp = n[loc];
		n[loc] = n[item];
		n[item] = temp;}
	n[loc] = value;}
int main()
{
	int n; // �迭  ũ�� ���� 
	printf("�迭�� ũ��:");
	scanf_s("%d", &n);
	length = n;
	int *arr;
	arr = (int*)malloc(sizeof(int)* n); // �迭�� ���°� = sizeof(int) *�迭�� �ټ�(n)
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}

	printf("��ġ :");
	scanf_s("%d", &loc);
	printf("������ : ");
	scanf_s("%d", &value);

	insult(arr, loc, value);
	
	for (int i = 0; i < n; i++)
	{
		printf("%d \n", arr[i]);
	}


	system("pause");

	return 0;
	
}

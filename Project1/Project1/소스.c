#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int length;//길이
int loc; //넣을 배열 위치 
int value;// 넣을 값 
void insult(int n[], int loc, int value) {
	int temp; // 임시저장값
	loc = loc - 1;
	for (int item = loc + 1; item <= length; item++){
		temp = n[loc];
		n[loc] = n[item];
		n[item] = temp;}
	n[loc] = value;}
int main()
{
	int n; // 배열  크기 선언 
	printf("배열의 크기:");
	scanf_s("%d", &n);
	length = n;
	int *arr;
	arr = (int*)malloc(sizeof(int)* n); // 배열에 들어가는값 = sizeof(int) *배열의 겟수(n)
	
	for (int i = 0; i < n; i++)
	{
		arr[i] = i;
	}

	printf("위치 :");
	scanf_s("%d", &loc);
	printf("넣을값 : ");
	scanf_s("%d", &value);

	insult(arr, loc, value);
	
	for (int i = 0; i < n; i++)
	{
		printf("%d \n", arr[i]);
	}


	system("pause");

	return 0;
	
}

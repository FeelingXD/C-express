#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define max 5

int main()
{
	
	int value;
	int loc;
	int n[max] = {1,2,3,4,5};

	printf("위치값?");
	scanf("%d", &loc);
	printf("넣을값?");
	scanf("%d", &value);
	insult(n, loc, value);
	for (int i = 0; i < max; i++) {
		printf("%d \n", n[i]);
	}
	


	system("pause");

	return 0;
	

}
int insult(int n[], int loc, int value) {
	
	int temp; //임시값
	;//배열은 0부터 셈으로 지정위치 loc 에 -1  i위치는 밀리는지점 표시
	int i = max - 1;
	for ( ; loc-1<i ;i--)
	{
		temp = n[max-1];
		n[i] = n[i - 1];
		n[i-1] = temp;
	}
	n[loc - 1] = value;
	return n;
}
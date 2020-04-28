#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int seats[SIZE] = { 0 };
int main() {

	char ans1;
	int ans2;
	
	void view();
	printf("몇번째 좌석을 예약하시겟습니까?(1-10선택)");
	scanf("%d", &ans2);
	if (seats[ans2 - 1] == 0) {
		seats[ans2 - 1] = 1;
		printf("예약되엇습니다.");
	}
	else
		printf("이미 예약되엇습니다.");

	return 0;



}
void view() {
	printf("---------------------------------------");
	printf(" 1	2	 3	 4	 5	 6	 7	 8	 9	 10");
	printf("---------------------------------------");
	for (int i = 0; i < SIZE; i++)
		printf("%d	",seats[i]);
	printf("\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int seats[SIZE] = { 0 };
int main() {

	char ans1;
	int ans2;
	
	void view();
	printf("���° �¼��� �����Ͻðٽ��ϱ�?(1-10����)");
	scanf("%d", &ans2);
	if (seats[ans2 - 1] == 0) {
		seats[ans2 - 1] = 1;
		printf("����Ǿ����ϴ�.");
	}
	else
		printf("�̹� ����Ǿ����ϴ�.");

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
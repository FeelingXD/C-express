#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char board[3][3];
	int x, y, k, i;
	// 보드를 초기화한다.
	for (x = 0; x < 3; x++)
		for (y = 0; y < 3; y++) board[x][y] = ' ';

	// 사용자로부터 위치를 받아서 보드에 표시한다.
	for (k = 0; k < 9; k++) {
		printf("(x, y) 좌표: ");
		scanf_s(" %d %d", &x, &y);
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';  // 순번에 따라 'X', 'O'중
													  // 보드를 화면에 그린다.
		for (i = 0; i < 3; i++) {
			printf("---|---|---\n");
			printf("%c  | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		}
		printf("---|---|---\n");

	}
	printf("\n");
	printf("학번 = 20174257 김희재 ");
	printf("\n");
	return 0;
}
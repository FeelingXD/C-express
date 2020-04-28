
#include <stdio.h>
#include <stdlib.h>

void init_board(char board[][3]);
int get_player_move(int player, char board[][3]);
void disp_board(char board[][3]);
int system_move(int player,char board[][3]);
int Bingo(char board[][3]);
int end = 9;
int main(void)
{
	char board[3][3];
	int quit = 0;

	init_board(board);
	do {
		disp_board(board);

		quit = get_player_move(0, board);
		if (quit == 1)break;
		quit = Bingo(board);
		disp_board(board);

		quit = system_move(1, board);
		if (quit == 1) break;
		quit = Bingo(board);
		disp_board(board);
	} while (quit == 0);
	return 0;
}
void init_board(char board[][3])// �迭�ʱ�ȭ 
{
	int x, y;
	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++) board[x][y] = ' ';
	}
}
int get_player_move(int player, char board[3][3]) //1�̸� ���� 0��ȯ�� ���
{
	int x, y, done = 0;
	while (done != 1)
	{
		printf("(x,y) ��ǥ (���� -1 ,-1)");
		scanf("%d %d", &x, &y);
		if (x == -1 && y == -1) return 1;
		if (board[x][y] == ' ') break;
		else printf("�߸��� ��ġ�Դϴ�.\n");
	}
	if (player == 0) board[x][y] = 'X';

	return 0;
}
void disp_board(char board[3][3])
{
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("---l---l---l\n");
		printf("%c  l %c  l %c  \n", board[i][0], board[i][1], board[i][2]);
	}
	printf("---l---l---l\n");

}
int system_move(int player,char board[3][3])// ��ǻ�� 
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == ' ')
			{
				board[i][j] = '0';
				return  0;
				
			}
		}
	}
	
}
int Bingo(char board[3][3])
{
	char win = ' ';
	for (int i = 0; i < 3; i++) {
		if ((((board[0][0]) == (board[1][1]) == (board[2][2])) || ((board[0][2]) == (board[2][0]) == (board[1][1]))) != ' ') //�밢����˻�
		{
			win = board[0][0];
				printf("%c �¸�", &board[1][1]);
				return 1;
		}
		else if ((board[i][0] == board[i][1] == board[i][2])!= ' ') {
			win = board[i][0];
			printf("%c �¸�", &board[i][0]);
			return 1;
		}
		else if ((board[0][i] == board[1][i] == board[2][i])!= ' ')
		{
			win= board[0][i];
			printf("%c �¸�", &board[0][i]);
			return 1;
		}
	}
	return 0;
}
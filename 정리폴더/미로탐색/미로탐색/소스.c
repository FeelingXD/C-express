#define MAX_STACK_SIZE 100
#define MAZE_SIZE 6
#include <stdio.h>
//typedef int element;
typedef struct {
	short r; // row #
	short c; // column#
}element;

typedef struct {
	element stack[MAX_STACK_SIZE];
	int top;
}StackType;
void init_stack(StackType *a)
{
	a->top = -1;
}
//���� ����
int is_empty(StackType *a)
{
	return(a->top == -1);
}
//��ȭ ���°���
int is_full(StackType *a)
{
	return(a->top == (MAX_STACK_SIZE - 1));
}
void push(StackType *a, element item)
{
	if (is_full(a))
	{
		fprintf(stderr, "���� ��ȭ ����\n");
		return;

	}
	else a->stack[++(a->top)] = item;
}
//���� �Լ�
void printStack(StackType *a) {

	int i = a->top;
	for (; -1< i; i--)
	{
		printf("%d ��° ���� {%hd, %hd}\n", i, a->stack[i].r, a->stack[i].c);
	}

}
element pop(StackType *a) {
	if (is_empty(a))
	{
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else
	{
		return a->stack[(a->top)--];
	}
}
element peek(StackType *a) {

	if (is_empty(a))
	{
		fprintf(stderr, "���ð��鿡��");
		exit(1);
	}
	else return a->stack[a->top];
}
element here = { 1,0 }, entry = { 1,0 };
char maze[MAZE_SIZE][MAZE_SIZE] = {
	{'1','1','1','1','1','1'},
	{'e','0','1','0','0','1'},
	{'1','0','0','0','1','1'},
	{'1','0','1','0','1','1'},
	{'1','0','1','0','0','x'},
	{'1','1','1','1','1','1'},
};
void push_loc(StackType *a, int r, int c)
{
	if (r < 0 || c < 0) return;
	if (maze[r][c] != '1'&& maze[r][c] != '.') {
		element temp;
		temp.r = r;
		temp.c = c;
		push(a,temp);
	}
}
void maze_print(char m[MAZE_SIZE][MAZE_SIZE]){

	printf("\n");
	for (int r = 0; r < MAZE_SIZE; r++) {
		for (int c = 0; c < MAZE_SIZE; c++) {
			printf("%c", maze[r][c]);
		}
		printf("\n");
	}
}
void main() {
	int r, c;		StackType a;
	init_stack(&a); here = entry;
	while (maze[here.r][here.c] != 'x') {
		r = here.r;
		c = here.c;
		maze[r][c] = '.';
		maze_print(maze);
		push_loc(&a, r - 1, c); push_loc(&a, r + 1, c);//��, �Ʒ�
		push_loc(&a, r - 1, c); push_loc(&a, r, c + 1);// ����, ������
		
		printStack(&a);
	if (is_empty(&a)) {
		printf("����\n"); return;
	}
	else
		here = pop(&a);
	}
	printf("����\n");
	printf("20174222 ������ \n");
	system("pause");


}
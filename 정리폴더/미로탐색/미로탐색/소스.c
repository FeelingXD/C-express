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
	for (; 0 <= i; i--) {
		printf("%d ��° ���� %d\n", i, a->stack[i]);
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
	{'1','1','1,','1','1','1'},
	{'e','0','1','0','0','1'},
	{'1','0','0','0','1','1'},
	{'1','0','1','0','1','1'},
	{'1','0','1','0','0','1'},
	{'1','1','1','1','1','1'},
};

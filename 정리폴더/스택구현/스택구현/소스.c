#define MAX_STACK_SIZE 100
#include <stdio.h>
typedef int element;
typedef struct{
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
	for (;0<=i;i--) {
		printf("%d ��° ���� %d\n",i,a->stack[i]);
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
void main() {
	StackType stack;
	init_stack(&stack);
	push(&stack, 1);
	push(&stack, 2);
	push(&stack, 3);
	printStack(&stack);
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));
	printf("%d ==  1�̸� �� 0�̸� ����\n", is_empty(&stack));

	printf("2017422 ������");
	getchar();

}

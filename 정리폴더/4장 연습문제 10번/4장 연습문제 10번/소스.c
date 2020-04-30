#define _CRT_SECURE_NO_WARNINGS
#define MAX_STACK_SIZE 100
#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct 
{
	element stack[MAX_STACK_SIZE];
	int top;
}StackType;
void init_stack(StackType *a)
{
	a->top = -1;
}
int is_empty(StackType *a)
{
	return (a->top == -1);
}
int is_full(StackType *a)
{
	return(a->top == (MAX_STACK_SIZE - 1));
}
void push(StackType *a, element item)
{
	if (is_full(a))
	{
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else a->stack[++(a->top)] = item;
}
void printStack(StackType *a) {

	int i = a->top;
	printf("반전된 정수 배열 ");
	for(; 0 <= i; i--) {
		printf("%d  ", a->stack[i]);
	}
}
element pop(StackType *a) {
	if (is_empty(a))
	{
		fprintf(stderr, "스택 공백 에러\n");
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
		fprintf(stderr, "스택공백에러");
		exit(1);
	}
	else return a->stack[a->top];
}
void get_stack(StackType *a, int n)
{
	
	int i=0;
	
	for (;a->top<n-1;)
	{
		printf("원소를 입력하세요 :");
		int tmp = 0;
		scanf("%d", &tmp);
		push(a, tmp);
	}
}
int main() {
	
	int n;
	StackType a;
	init_stack(&a);
	printf("정수 배열의 크기 : ");
	scanf("%d", &n);
	printf("\n");

	
	get_stack(&a, n);
	
	printStack(&a);

	system("pause");
	return 0;
}

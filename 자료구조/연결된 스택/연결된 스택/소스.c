#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct {
	element data;
	struct StackNode* link;
}StackNode;
typedef struct {
	StackNode* top;
}LinkedStackType;
//�ʱ�ȭ
void init(LinkedStackType* l)
{
	l->top = NULL;
}
int is_empty(LinkedStackType* l)
{
	return (l->top) == NULL;
}
int is_full(LinkedStackType* l)
{
	return 0;
}//��ũ ������ �迭���ٸ��� �޸𸮰� ������ �ѵ������� ������ �����Ƿ� �׻� 0���� ��ȯ
void push(LinkedStackType* l, element item)
{
	StackNode* tmp = malloc(sizeof(StackNode));
	tmp->data = item;
	tmp->link = l->top;
	l->top = tmp;
}
void print_stack(LinkedStackType* l)
{
	for (StackNode* s = l->top; s!= NULL; s = s->link) {
		printf("%d->", s->data);
	}
	printf("NULL\n");
}
void pop(LinkedStackType* l)
{
	if (is_empty(l))
	{
		fprintf(stderr, "������ ������ϴ�.");
		exit(1);
	}
	else {
		StackNode* tmp = l->top;
		int data = tmp->data;
		l->top = l->top->link;
		free(tmp);
		return data;
	}
}
int main()
{
	LinkedStackType* l;
	init(&l);
	push(&l, 1); print_stack(&l);
	push(&l, 2); print_stack(&l);
	push(&l, 3); print_stack(&l);
	
	pop(&l); print_stack(&l);
	pop(&l); print_stack(&l);
	pop(&l); print_stack(&l);
	return 0;
}
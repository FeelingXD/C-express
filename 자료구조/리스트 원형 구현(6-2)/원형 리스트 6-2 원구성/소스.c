#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct {
	element data;
	struct ListNode* link;
}ListNode;
ListNode* create_Node(int x)
{
	ListNode* p;
	p = malloc(sizeof(ListNode));
	p->data = x;
	p->link = NULL;
	return p;
}
void insert_first(ListNode** head, ListNode* p) {

	ListNode* tmp = malloc(sizeof(ListNode));
	if (*head == NULL)
	{
		*head = p;
		p->link=p;
	}
	p->link = (*head)->link;
	(*head)->link = p;
}
void display(ListNode** phead, ListNode* p)
{
	while (1) {
		do {
			printf("%d->", p->data);
			p = p->link;
		} while (p != *phead);
		printf("%d->", p->data);
		p = p->link;
	}
}
int main() {

	ListNode* list = NULL;

	ListNode* tmpNode = create_Node(3);
	insert_first(&list, tmpNode);

	tmpNode = create_Node(2);
	insert_first(&list, tmpNode);

	tmpNode = create_Node(1);
	insert_first(&list, tmpNode);

	display(&list,tmpNode);
}
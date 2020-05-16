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
ListNode* insert_first(ListNode** head, ListNode* p) {

	ListNode* tmp = *head;
	if (*head == NULL)
	{
		*head = p;
		p->link = p;
	}
	else {
		p->link = (*head)->link;
		(*head)->link = p;
	}

}
void display(ListNode* head)
{
	ListNode* p = head;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->link;
	}
	printf("\n");
}
int main() {

	ListNode* list = NULL;

	ListNode* tmpNode = create_Node(3);
	insert_first(&list, tmpNode);

	tmpNode = create_Node(2);
	insert_first(&list, tmpNode);

	tmpNode = create_Node(1);
	insert_first(&list, tmpNode);

	display(list);
}
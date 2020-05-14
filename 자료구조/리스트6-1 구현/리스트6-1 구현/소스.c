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
void insert_node(ListNode** head, ListNode* newNode) {
	ListNode* p = *head;
	if (p == NULL) {
		*head = newNode;
	}
	else {
		while (p->link != NULL) {
			p = p->link;
		}
		p->link = newNode;
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

	ListNode *tmpNode = create_Node(3);
	insert_node(&list, tmpNode);

	tmpNode = create_Node(2);
	insert_node(&list, tmpNode);

	tmpNode = create_Node(1);
	insert_node(&list, tmpNode);

	display(list);

}
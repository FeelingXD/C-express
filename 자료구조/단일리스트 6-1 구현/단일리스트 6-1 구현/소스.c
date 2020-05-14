#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
}ListNode;
ListNode* create_node(int x) {
	ListNode* p;
	p = malloc(sizeof(ListNode));
	p->data = x;
	p->link = NULL;
	return p;
}
void insert_node(ListNode** head, ListNode* p, ListNode* New_Node) {
	if (*head == NULL)
	{
		New_Node->link = NULL;
		*head = New_Node;
	}
	else if (p == NULL) {
		New_Node->link = *head;
		*head = New_Node;
	}
	else {
		New_Node->link = p->link;
		p->link = New_Node;
	}
}
void display(ListNode *p)
{
	while (p!=NULL)
	{
		printf("%d->", p->data);
		p = p->link;
	}
	printf("\n");
}
int main() {
	ListNode* list = NULL;

	ListNode* tmpNode = create_node(3);
	insert_node(&list, NULL, tmpNode);

	 tmpNode = create_node(2);
	insert_node(&list, NULL, tmpNode);

	 tmpNode = create_node(1);
	insert_node(&list, NULL, tmpNode);

	display(list);
}

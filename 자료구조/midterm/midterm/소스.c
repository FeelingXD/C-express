#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct {
	element data;
	struct ListNode* link;
}ListNode;
typedef struct {
	struct ListNode* tmp;
}CListType;// CList�� List�� ���� 
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
		p->link = p;
	}
	p->link = (*head)->link;
	(*head)->link = p;
}
void display(ListNode** head, ListNode* p)
{
	while (1) {
		do {
			printf("%d->", p->data);
			p = p->link;
		} while (p != *head);
		printf("%d->", p->data);
		p = p->link;
	}
}
int get_size(CListType* list) {
	ListNode* p = list->tmp;
	int num=0;
	p = p->link;
	for (; p != list->tmp;) {
		num += 1;
		p=p->link;
	}
	num++; // ������� ������ ��츦 �����ϰ� ��������Ƿ� 1�� ������
	return	num;
}
ListNode* search(CListType* list, element data) {

	ListNode* p = list->tmp;//Clisttype list�޾ƿ����Ƿ� CListtype tmp =>ListNode list �� ����Ŵ 
	if (p->data == data) {//��� �ΰ�� �����˻� 
		printf(" ���� \n");
		return 1;
	}
	p = p->link;
	for (; p != list->tmp; p = p->link) { // ��� �ΰ�� ���ܰ˻�
		if (p->data == data)
		{
			printf(" ���� \n");
			return 1;
		}
	}
	
printf(" ���� \n");
return 0;

}
int main() {

	ListNode* list = NULL;
	ListNode* tmpNode = NULL;
	int size;
	int data;
	printf("����� ���� : ");
	scanf(" %d", &size);
	getchar();

	for (int i = 0; i+1 <= size; i++)
	{
		printf("����� #%d ������ : ", i+1);
		scanf(" %d", &data);
		getchar();
		tmpNode = create_Node(data);
		insert_first(&list, tmpNode);
	}
	search(&list, 4);

	printf("���� ����Ʈ ����� ���� = %d", get_size(&list));
}
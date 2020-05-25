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
}CListType;// CList가 List를 포함 
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
	num++; // 헤드이자 테일인 경우를 제외하고 계산했으므로 1을 더해줌
	return	num;
}
ListNode* search(CListType* list, element data) {

	ListNode* p = list->tmp;//Clisttype list받아왔으므로 CListtype tmp =>ListNode list 를 가르킴 
	if (p->data == data) {//헤드 인경우 먼저검사 
		printf(" 성공 \n");
		return 1;
	}
	p = p->link;
	for (; p != list->tmp; p = p->link) { // 헤드 인경우 제외검사
		if (p->data == data)
		{
			printf(" 성공 \n");
			return 1;
		}
	}
	
printf(" 실패 \n");
return 0;

}
int main() {

	ListNode* list = NULL;
	ListNode* tmpNode = NULL;
	int size;
	int data;
	printf("노드의 개수 : ");
	scanf(" %d", &size);
	getchar();

	for (int i = 0; i+1 <= size; i++)
	{
		printf("노드의 #%d 데이터 : ", i+1);
		scanf(" %d", &data);
		getchar();
		tmpNode = create_Node(data);
		insert_first(&list, tmpNode);
	}
	search(&list, 4);

	printf("연결 리스트 노드의 개수 = %d", get_size(&list));
}
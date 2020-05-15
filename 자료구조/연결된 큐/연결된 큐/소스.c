#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct {
	element item;//요소
	struct QueueNode* link;
}QueueNode;
typedef struct {
	QueueNode* front,* rear;
}LinkedQueueType;
void error(char* message)
{
	fprintf(stderr, "%s", message);
}
void init(LinkedQueueType* l) { l->front = l->rear = NULL; }
int is_empty(LinkedQueueType* l) { return (l->front == NULL); }
void enqueue(LinkedQueueType* l, element item) {
	QueueNode* tmp = malloc(sizeof(QueueNode));
	tmp->item = item;
	tmp->link = NULL;
	if (is_empty(l)){
		l->front = tmp;
		l->rear = tmp;
	}
	else {
		l->rear->link = tmp;
		l->rear = tmp;
	}

}
element dequeue(LinkedQueueType* l){
	QueueNode* tmp = l->front;
	element data;
	if (is_empty(l)){
		error("스택공백에러");
	}
	else
	{
		data = l->front->item;
		l->front = l->front->link;
		if (l->front == NULL){
			l->rear = NULL;
		}
		free(tmp);
		return data;
	}
}
void display(LinkedQueueType* l) {
	
	QueueNode* tmp;
	if (is_empty(l))
	{
		error("스택 공백에러\n");
		exit(1);
	}
	else
		for (tmp = l->front; tmp != NULL;tmp= tmp->link)
			printf("%d->", tmp->item);
	printf("NULL\n");
}
void main() {
	LinkedQueueType l;

	init(&l);

	enqueue(&l, 1);
	enqueue(&l, 2);
	enqueue(&l, 3);

	display(&l);

	printf("dequeue()=%d\n", dequeue(&l));
	printf("dequeue()=%d\n", dequeue(&l));
	printf("dequeue()=%d\n", dequeue(&l));
}
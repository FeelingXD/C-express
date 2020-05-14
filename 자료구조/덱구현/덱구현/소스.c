#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

typedef int element;
typedef struct {
	element data[MAX];
	int front, rear;
}DequeType;
//오류
void error(char *message){
	fprintf(stderr, "%s\n", message);
	exit(1);
}
void init_deque(DequeType* q) {
	q->front = q->rear = 0;
}
int is_empty(DequeType* q) {
	return (q->front == q->rear);
}
int is_full(DequeType* q) {
	return ((q->rear + 1) % MAX == q->front);
}
void deque_print(DequeType* q)
{
	printf("DEQUE(front=%d , rear=%d) =", q->front, q->front);
	if (!is_empty(q)) {
		int i = q->front;
		do {
			i = (i + 1) % MAX;
			printf("%d |", q->data[i]);
			if (i == q->rear)
				break;
		} while (i != q->front);
		

	}
	printf("\n");
}

void add_rear(DequeType* q, element item)
{
	if (is_full(q))
		error("데큐가 포화상태입니다");
	q->rear = (q->rear + 1) % MAX;
	q->data[q->rear] = item;
}
element delete_front(DequeType* q) {
	if (is_empty(q))
		error("데큐가 공백상태입니다.");
	q->front = (q->front + 1) % MAX;
	q->data[q->rear];
}
element get_front(DequeType* q) {
	if (is_empty(q))
		error("데큐가 공백상태입니다.");
	return q->data[(q->front + 1) % MAX];
}
void add_front(DequeType* q, element val) {
	if (is_full(q))
		error("데큐가 포화상태입니다.");
	q->data[q->front] = val;
	q->front = (q->front - 1 + MAX) % MAX;
}
element delete_rear(DequeType* q)
{
	int prev = q->rear;
	if (is_empty(q))
		error("데큐가 공백상태입니다");
	q->rear = (q->rear - 1 + MAX) % MAX;
	return q->data[prev];
}
element get_rear(DequeType* q)
{
	if (is_empty(q))
		error("데큐가 공백상태입니다.");
	return q->data[q->rear];
}
int main(void)
{
	DequeType a;

	init_deque(&a);
	for (int i = 0; i < 3; i++) {
		add_front(&a, i);
		deque_print(&a);
	}
	for (int i = 0; i < 3; i++)
	{
		delete_rear(&a);
		deque_print(&a);
	}

	printf("\n20174222 고지민\n");
	return 0;
}
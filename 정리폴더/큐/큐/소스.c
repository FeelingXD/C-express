#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_QUEUE_SIZE 7
typedef int element;
typedef struct {
    element queue[MAX_QUEUE_SIZE];
    int front;
    int rear;
}QueueType;
void init_queue(QueueType* q) {
    q->front = -1;
    q->rear = -1;
}
void queue_print(QueueType* q) {
    for (int i = 0; i < MAX_QUEUE_SIZE; i++)
        printf("", q->queue[i]);
}

int is_empty(QueueType* q) {
    return (q->front == q->rear);
}
int is_full(QueueType* q) {
    return (q->front == (q->rear + 1) % MAX_QUEUE_SIZE);
}
void enqueue(QueueType* q, element item) {
    if (is_full(q)) {
        printf("ť ���� �� ");
        exit();
    }
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->queue[q->rear] = item;

}
element deque(QueueType* q) {
    if (is_empty) {
        printf("ť�� �����");
    }
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->queue[q->front];
}
int main() {
    QueueType q;
    int element;

    init_queue(&q);
    printf("������ ���� �ܰ�");
    while (!is_full(&q))
    {
        printf("?");
        scanf("%d", &element);
        enqueue(&q, element);
        queue_print(&q);
    }
    printf("ť�� ��ȭ�����Դϴ�.");

    printf("������ �����ܰ�");
    while (!is_empty(&q)) {
        element = deque(&q);
        printf("%d", element);
        queue_print(&q);
    }
    printf("");
    return 0;
}
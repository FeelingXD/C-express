#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_QUEUE_SIZE 7
typedef element;
void init_queue(QueueType* q){
    q->front = 0;
}
void queue_print(QueueType* q){
    for (int i = 0;i < MAX_QUEUE_SIZE;i++)
        printf("queue 값: ", q->a[i]);
}
typedef struct {
    element a[MAX_QUEUE_SIZE];
    int front;
    int rear;
}QueueType;
int is_empty(QueueType* q) {
    return (q->front == q->rear);
}
int is_full(QueueType* q) {
    return (q->front==(q->rear+1)%MAX_QUEUE_SIZE);
}
void enqueue(QueueType* q, element item) {
    if(is_full(q))
        error("큐가 포화 상태입니다.");
    q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
    q->a[q->rear] = item;
    
}
element deque(QueueType* q) {
    if (is_empty)
        error("내용이 없습니다.");
    q->front = (q->front + 1) % MAX_QUEUE_SIZE;
    return q->a[q->front];
}
int main(){
    QueueType q;
    int element;

    init_queue(&q);
    printf("--데이터 추가단계--");
    while (!is_full(&q))
    {
        printf("정수를 입력하시오.");
        scanf("%d", &element);
        enqueue(&q, element);
        queue_print(&q);
    }
    printf("큐는 포화상태입니다.");

    printf(" --데이터 삭제단계--");
    while (!is_empty(&q)) {
        element = deque(&q);
        printf("꺼내진 정수: %d", element);
        queue_print(&q);
    }
    printf("큐는 공백상태입니다.");

    return 0;
    
    

}

#include <stdio.h>
#define MAX 100
typedef struct{
	int data;
	struct TreeNode* left, * right;
}TreeNode;
typedef TreeNode *element;
typedef struct {
	element data[MAX];
	int front, rear;
}QueueType;
init_queue(QueueType* q)
{
	q->front = q->rear = -1;
}
is_empty(QueueType* q)
{
	if (q->front == q->rear)
		return 1;
	else
		return 0;
}
is_full(QueueType* q)
{
	if (q->rear == MAX - 1)
		return 1;
	else
		return 0;
}
enqueue(QueueType* q,element data)
{
	if (is_full(q))
	{
		printf("큐가 포화상태입니다. \n");
		return;
	}
	q->data[++(q->rear)] = data;
}
element dequeue(QueueType* q)
{
	if (is_empty(q))
	{
		printf("큐가 공백입니다. \n");
		return;
	}
	return q->data[++(q->front)];
}
levelorder(TreeNode* t)
{
	QueueType q;
	init_queue(&q);

	if (t == NULL)return 0;
	enqueue(&q, t);
	while (!is_empty(&q))
	{
		t = dequeue(&q);
		printf(" [%d]\t", t->data);
		if (t->left)
			enqueue(&q, t->left);
		if (t->right)
			enqueue(&q, t->right);
	}
}
//			  15
//		4			 20
//	1			 16		 25
TreeNode n1 = { 1,NULL,NULL };
TreeNode n2 = { 4, &n1, NULL };
TreeNode n3 = { 16,NULL,NULL };
TreeNode n4 = { 25,NULL,NULL };
TreeNode n5 = { 20, &n3, &n4 };
TreeNode n6 = { 15, &n2, &n5 };
TreeNode* root = &n6;

int main() {
	printf("레벨순회 =");
	levelorder(root);
	printf("\n");
	return 0;
}
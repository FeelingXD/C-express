#include <stdio.h>
void swap(int px, int py);
void swap2(int *px, int *py);
int main() {
	int a = 100, b = 200;
	printf("a = %d b = %d\n", a, b);

	swap(a, b);
	printf("a = %d b = %d\n", a, b);

	swap2(&a, &b);
	printf("a = %d b = %d\n", a, b);

	return 0;
}
void swap(int px, int py)
{
	int tmp;

	//tmp = px;
	px = px + 50;
	py = py + 50;
	printf("x=%d , y=%d\n", px, py);
}
void swap2(int *px,int *py)
{
	int tmp;
	*px = *px + 50;
	*py = *py + 50;
	//tmp = *px;
	//*px = *py;
	//*py = tmp;
}
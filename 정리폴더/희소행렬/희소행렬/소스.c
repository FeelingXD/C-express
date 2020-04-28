#include <stdio.h>
#define ROWS 3
#define COLS 3
#define MAX_TERMS 10

typedef struct {

	int row;
	int col;
	int value;

}element;
typedef struct sparsematrix {
	element data[MAX_TERMS];
	int rows;// 행의갯수
	int cols;// 열의 갯수
	int terms;
}sparsematrix;
void print_matrix(sparsematrix a){
	// 배열출력
	int n=0; //데이터 배열 1번째 원소 
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (a.data[n].row == i && a.data[n].col == j)
			{
				printf(" %d ", a.data[n].value);
				n++;//다음데이터검사
			}
			else
			{
			printf(" 0 ");
			}
		}
		printf("\n");

	}

	printf("\n");
}//배열출력
sparsematrix spare_matrix_add2(sparsematrix a, sparsematrix b)//행렬의 덧셈
{

	sparsematrix c;
	int ca = 0  ,cb = 0, cc = 0; // 각배열항목의 인덱스

	if (a.rows != b.rows || a.cols != b.cols)
	{
		fprintf(stderr, "희소행렬 크기 에러\n");
		exit(1);
	}
	c.rows = a.rows;
	c.cols = a.cols;
	c.terms = 0;

	while (ca < a.terms && cb < b.terms) {
		//각항목의 순차적인 번호를 계산한다.
		int inda = a.data[ca].row *a.cols + a.data[ca].col;
		int indb = b.data[cb].row *b.cols + b.data[cb].col;
		if (inda < indb) {

			//a 배열 항목검사   b보다 작은 유효값이 잇으면 c에 a를 넣음
			c.data[cc++] = a.data[ca++];
		}
		else if (inda == indb)
		{//a와 b가 같은위치
			if ((a.data[ca].value == b.data[cb].value) != 0){
				c.data[cc].row = a.data[ca].row;
				c.data[cc].col = a.data[ca].col;
				c.data[cc++].value = a.data[ca++].value + b.data[cb++].value;

			}
			else {
				ca++; cb++;
			}
		}
		else {
			c.data[cc++] = b.data[cb++];
		}
	}
	for (; ca < a.terms;)
	{
		c.data[cc++] = a.data[ca++];
	}
	for (; cb < b.terms;)
	{
		c.data[cc++] = b.data[cb++];
	}
	c.terms = cc;
	return c;
}//배열덧셈
sparsematrix spare_matrix_subtraction(sparsematrix a, sparsematrix b) {


	sparsematrix c;
	int ca = 0, cb = 0, cc = 0; // 각배열항목의 인덱스

	if (a.rows != b.rows || a.cols != b.cols)
	{
		fprintf(stderr, "희소행렬 크기 에러\n");
		exit(1);
	}
	c.rows = a.rows;
	c.cols = a.cols;
	c.terms = 0;

	while (ca < a.terms && cb < b.terms) {
		//각항목의 순차적인 번호를 계산한다.
		int inda = a.data[ca].row *a.cols + a.data[ca].col;
		int indb = b.data[cb].row *b.cols + b.data[cb].col;
		if (inda < indb) {

			//a 배열 항목검사
			c.data[cc++] = a.data[ca++];
			
			
		}
		else if (inda == indb)
		{//a와 b가 같은위치
			if ((a.data[ca].value + b.data[cb].value) != 0) {
				c.data[cc].row = a.data[ca].row;
				c.data[cc].col = a.data[ca].col;
				c.data[cc++].value = a.data[ca++].value - b.data[cb++].value;

			}
			else {
				ca++; cb++;
			}
		}
		else {
			c.data[cc] =  b.data[cb];
			c.data[cc++].value = -1*b.data[cb++].value;
		}
	}
	for (; ca < a.terms;)
	{
		c.data[cc++] = a.data[ca++];
	}
	for (; cb < b.terms;)
	{
		c.data[cc++] = b.data[cb++];
	}

	c.terms = cc;
	return c;
}//배열뺄샘
int main()
{
	sparsematrix m1 = { {{1,1,5},{2,2,9}}, 3,3,2 };
	sparsematrix m2 = { {{0,0,5},{2,2,9}},3,3,2 };
	sparsematrix m3;
	sparsematrix m4;
	
	m3 = spare_matrix_add2(m1, m2);
	
	print_matrix(m1);
	print_matrix(m2);
	printf("행렬 덧셈 결과\n");
	print_matrix(m3);

	m4 = spare_matrix_subtraction(m1, m2);
	printf("행렬 뺄샘 결과\n");
	print_matrix(m4);
	

	printf("%d", m1.data[4].value);


	system("pause");

	return 0;
}






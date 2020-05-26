#include <stdio.h>
int get_line_paramater(int x1, int y1, int x2, int y2, float* slope, float* yintercept)
{
	if (x1 == x2) return -1;
	else {
		*slope = (float)(y2 - y1) / (float)(x2 - x1);
		*yintercept = y1 - (*slope) * x1;
	
	}
}
int main()
{
	float s = 0 ,y = 0;
	printf("slope %f , yintercept  %f \n", s, y);
	
	if (get_line_paramater(3, 3, 6, 6, &s, &y) == -1)printf("error");
	else printf("slope %f, yintercept %f \n ", s, y);

	return 0;
}
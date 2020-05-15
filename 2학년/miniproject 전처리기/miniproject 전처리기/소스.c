#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define USA
#define DEBUG

#ifndef PI
#define PI 3.141592
#endif

#ifndef SQUARE
#define SQUARE(r)	(r)*(r)
#endif
double area(double radius)
{
	double result = 0.0;
#ifdef DEBUG
#ifdef USA
	printf("area(%f) is called \n", radius);
#else
	printf("area(%f)가호출되었음radius);
#endif
#endif
		result = PI * SQUARE(radius);
	return result;
}


int main() {
	double radius;
#ifdef USA
	printf("Please enter radius of a circle(inch) : ");
#else
	printf("원의 반지름을 입력하시오");
#endif
	scanf("%lf", &radius);
#ifdef USA
	printf("area of the circle is %f \n", area(radius));
	printf("\n20174222 -고지민 ");
#else
	printf("원의 면적은 %f 입니다.\n", area(radius));
#endif // USA
	return 0;
}
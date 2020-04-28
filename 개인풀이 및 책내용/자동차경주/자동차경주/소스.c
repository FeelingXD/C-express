#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void disp_car(int, int);

int main()
{
	int i;
	int car_1 = 0, car_2 = 0;

	srand((time(NULL)));

	for (i = 0; i<6; i++)
	{
		car_1 += rand() % 100;
		car_2 += rand() % 100;
		disp_car(1, car_1);
		disp_car(2, car_2);
		printf("-----------------\n");
		getch();
	}
	return 0;


}
void disp_car(car_n, distance)
{
	int i;
	printf("car#%d:", car_n);
	for (i = 0; i < distance / 10; i++) {
		printf("*");

	}
	printf("\n");

}

#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void getSensorData(double *p)
{
	srand(time(NULL));
	int random = rand()%100;
	int random2 = rand() % 100;
	int random3 = rand() % 100;

	p[0] = random;
	p[1] = random2;
	p[2] = random3;
	return;

}
int main()
{
	double sensorData[3];
	getSensorData(sensorData);

	printf("���� ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[0]);
	printf("�߰� ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[1]);
	printf("������ ������ ��ֹ����� �Ÿ�: %lf \n", sensorData[2]);
	printf("20174222 ������");
	getchar();
	return 0;
}

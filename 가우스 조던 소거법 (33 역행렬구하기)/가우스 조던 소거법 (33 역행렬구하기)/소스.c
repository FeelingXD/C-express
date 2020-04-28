#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<stdlib.h>

#include<math.h>

#define eps 0.000000001



int main() {

	double amat[10][20], v;

	int i, j, k, x, dim;



	system("cls");

	printf("\n���콺-���� �ҰŹ��� ���� ������� ���");

	printf("\n����� �����Է�: ");

	scanf("%d", &dim);



	//  2���� �迭�� ����� �о� ����

	printf("\n%d %d ����� �Է�: \n\n", dim, dim);

	for (i = 0; i < dim; i += 1) {

		for (j = 0; j < dim; j += 1) {

			scanf("%lf", &amat[i][j]);

		}

	}



	// �־��� ��Ŀ� ���� ����� �ٿ� ÷������� ���� 

	for (i = 0; i < dim; i += 1) {

		for (j = dim; j < dim + dim; j += 1) {

			if (i == (j%dim)) {

				amat[i][j] = 1.0;

			}
			else {

				amat[i][j] = 0.0;

			}

		}

	}



	// ÷������� ��� 

	printf("\n���콺-���� �ҰŹ� ��, ÷����� : \n\n");

	for (i = 0; i < dim; i += 1) {

		for (j = 0; j < dim + dim; j += 1) {

			printf(" %5.2f", amat[i][j]);

		}

		printf("\n");

	}



	// ���콺 ���� �ҰŹ�

	for (i = 0; i < dim; i += 1) {

		x = i;



		// i��° Į���߿��� ���� ū ���Ҹ� ���� �ִ� n-i�� �� �߿��� ���� 

		for (j = i + 1; j < dim; j += 1) {

			if (amat[j][i] > amat[x][i]) { x = j; }



			if (fabs(amat[x][i]) < eps) { // ���α׷��� �������� ����

				printf("\n ���Ұ� �ʹ� �۾Ƽ� ����� ���� ���� !!!");

				getchar(); getchar();

				return 0;

			}

		}



		// ���� ū ���Ҹ� ���� ��� i��° ���� ���� �ٲ�

		if (x != i) {

			for (k = 0; k < dim + dim; k += 1) {

				v = amat[i][k];

				amat[i][k] = amat[x][k];

				amat[x][k] = v;

			}

		}



		printf("\n���� ��ȯ �� ÷����� : \n");

		for (j = 0; j < dim; j += 1) {

			for (k = 0; k < dim + dim; k += 1) {

				printf(" %5.2f", amat[j][k]);

			}

			printf("\n");

		}



		// �Ұſ����� ����

		for (j = 0; j < dim; j += 1) {

			if (j != i) {

				v = amat[j][i];

				for (k = 0; k < dim + dim; k += 1) {

					amat[j][k] -= (amat[i][k] / amat[i][i])*v;

				}

			}
			else {

				v = amat[j][i];

				for (k = 0; k < dim + dim; k += 1) {

					amat[j][k] /= v;

				}

			}

		}



		printf("\n�Ұ� �� ÷����� : \n");

		for (j = 0; j < dim; j += 1) {

			for (k = 0; k < dim + dim; k += 1) {

				printf(" %5.2f", amat[j][k]);

			}

			printf("\n");

		}

	}



	// ����� ��� 

	printf("\n���콺-���� �ҰŹ� ��, ÷����� : \n\n");

	for (i = 0; i < dim; i += 1) {

		for (j = 0; j < dim + dim; j += 1) {

			printf(" %5.2f", amat[i][j]);

		}

		printf("\n");

	}



	// ������� ���

	printf("\n\n\n����� : \n\n");

	for (i = 0; i < dim; i += 1) {

		for (j = dim; j < dim + dim; j += 1) {

			printf(" %8.5f", amat[i][j]);

		}

		printf("\n");

	}

	getchar(); getchar();



	return 0;

}
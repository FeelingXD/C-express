#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<stdlib.h>

#include<math.h>

#define eps 0.000000001



int main() {

	double amat[10][20], v;

	int i, j, k, x, dim;



	system("cls");

	printf("\n가우스-조던 소거법에 의한 역행렬의 계산");

	printf("\n행렬이 차수입력: ");

	scanf("%d", &dim);



	//  2차원 배열에 행렬을 읽어 들임

	printf("\n%d %d 행렬의 입력: \n\n", dim, dim);

	for (i = 0; i < dim; i += 1) {

		for (j = 0; j < dim; j += 1) {

			scanf("%lf", &amat[i][j]);

		}

	}



	// 주어진 행렬에 단위 행렬을 붙여 첨가행렬을 만듬 

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



	// 첨가행렬의 출력 

	printf("\n가우스-조던 소거법 전, 첨가행렬 : \n\n");

	for (i = 0; i < dim; i += 1) {

		for (j = 0; j < dim + dim; j += 1) {

			printf(" %5.2f", amat[i][j]);

		}

		printf("\n");

	}



	// 가우스 조던 소거법

	for (i = 0; i < dim; i += 1) {

		x = i;



		// i번째 칼럼중에서 가장 큰 원소를 남아 있는 n-i개 행 중에서 구함 

		for (j = i + 1; j < dim; j += 1) {

			if (amat[j][i] > amat[x][i]) { x = j; }



			if (fabs(amat[x][i]) < eps) { // 프로그램의 비정상적 종료

				printf("\n 원소가 너무 작아서 계속할 수가 없슴 !!!");

				getchar(); getchar();

				return 0;

			}

		}



		// 가장 큰 원소를 가진 행과 i번째 행을 서로 바꿈

		if (x != i) {

			for (k = 0; k < dim + dim; k += 1) {

				v = amat[i][k];

				amat[i][k] = amat[x][k];

				amat[x][k] = v;

			}

		}



		printf("\n행의 교환 후 첨가행렬 : \n");

		for (j = 0; j < dim; j += 1) {

			for (k = 0; k < dim + dim; k += 1) {

				printf(" %5.2f", amat[j][k]);

			}

			printf("\n");

		}



		// 소거연산을 해줌

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



		printf("\n소거 후 첨가행렬 : \n");

		for (j = 0; j < dim; j += 1) {

			for (k = 0; k < dim + dim; k += 1) {

				printf(" %5.2f", amat[j][k]);

			}

			printf("\n");

		}

	}



	// 행렬의 출력 

	printf("\n가우스-조던 소거법 후, 첨가행렬 : \n\n");

	for (i = 0; i < dim; i += 1) {

		for (j = 0; j < dim + dim; j += 1) {

			printf(" %5.2f", amat[i][j]);

		}

		printf("\n");

	}



	// 역행렬의 출력

	printf("\n\n\n역행렬 : \n\n");

	for (i = 0; i < dim; i += 1) {

		for (j = dim; j < dim + dim; j += 1) {

			printf(" %8.5f", amat[i][j]);

		}

		printf("\n");

	}

	getchar(); getchar();



	return 0;

}
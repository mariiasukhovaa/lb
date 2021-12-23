#include "Header.h"
using namespace std;

void initialization(double** matrix_int_B, double** matrix_int_A, int matrix_size) {
	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++) {
			matrix_int_B[i][j] = rand() % 255;
			matrix_int_A[i][j] = rand() % 255;
		}
}

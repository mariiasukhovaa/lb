#include "header_func.h"
//�������� ������
void difference_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size) {

	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++)
			matrix_sum1[i][j] -= matrix_sum2[i][j];
}
///����� ������
void sum_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size) {

	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++)
			matrix_sum1[i][j] += matrix_sum2[i][j];
}

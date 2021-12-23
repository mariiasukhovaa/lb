#include "header_func.h"
//������������ ��������� �������
void mult_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size) {

	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++)
			matrix_sum1[i][j] *= matrix_sum2[i][j];
}
//������������ ������� �������
void div_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size) {

	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++)
			matrix_sum1[i][j] /= matrix_sum2[i][j];
}
//�������� 1 ������� � ��������� 2
void slpow_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size) {

	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++)
			matrix_sum1[i][j] +=pow(matrix_sum2[i][j],2);
}
///����� ������� � �������
void output_matrix(double** matrix_int_A, int matrix_size) {
	for (int i = 0; i < matrix_size; i++) {
		for (int j = 0; j < matrix_size; j++) {
			printf(" %g ", matrix_int_A[i][j]);
		}
		cout << endl;
	}
}

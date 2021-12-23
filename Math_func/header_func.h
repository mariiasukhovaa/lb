#include <iostream>
using namespace std;
void sum_matrix(double** matrix_int_B, double** matrix_int_A, int matrix_size);//сумма матриц
void output_matrix(double** matrix_int_A, int matrix_size);//вывод матриц
void difference_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size);
void mult_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size);
void div_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size);
void slpow_matrix(double** matrix_sum1, double** matrix_sum2, int matrix_size);
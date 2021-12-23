#include "pch.h"

//сложение
TEST(TestMatrix, Test_sum_matrix) {
	double** matrix1 = new double* [2];
	double** matrix2 = new double* [2];
	double** result = new double* [2];
	for (int i = 0; i < 2; i++) {
		matrix1[i] = new double[2];
		matrix2[i] = new double[2];
		result[i] = new double[2];
	}
	matrix1[0][0] = 1;
	matrix1[0][1] = -5;
	matrix1[1][0] = 0;
	matrix1[1][1] = 17;

	matrix2[0][0] = 1;
	matrix2[0][1] = -7;
	matrix2[1][0] = 0;
	matrix2[1][1] = 17;

	result[0][0] = 2;
	result[0][1] = -12;
	result[1][0] = 0;
	result[1][1] = 34;

	sum_matrix(matrix1, matrix2, 2);

	EXPECT_EQ(**result, **matrix1);

	for (int i = 0; i < 2; ++i) {
		delete[] matrix1[i];
		delete[] matrix2[i];
		delete[] result[i];
	}
	delete[] matrix1;
	delete[] matrix2;
	delete[] result;
}

//вычитание
TEST(TestMatrix, Test_difference_matrix) {
	double** matrix1 = new double* [2];
	double** matrix2 = new double* [2];
	double** result = new double* [2];
	for (int i = 0; i < 2; i++) {
		matrix1[i] = new double[2];
		matrix2[i] = new double[2];
		result[i] = new double[2];
	}
	matrix1[0][0] = 1;
	matrix1[0][1] = -5;
	matrix1[1][0] = 0;
	matrix1[1][1] = 17;

	matrix2[0][0] = 1;
	matrix2[0][1] = -7;
	matrix2[1][0] = 0;
	matrix2[1][1] = 17;

	result[0][0] = 0;
	result[0][1] = 2;
	result[1][0] = 0;
	result[1][1] = 0;

	difference_matrix(matrix1, matrix2, 2);

	EXPECT_EQ(**result, **matrix1);

	for (int i = 0; i < 2; ++i) {
		delete[] matrix1[i];
		delete[] matrix2[i];
		delete[] result[i];
	}
	delete[] matrix1;
	delete[] matrix2;
	delete[] result;
}
//умножение
TEST(TestMatrix, Test_mult_matrix) {
	double** matrix1 = new double* [2];
	double** matrix2 = new double* [2];
	double** result = new double* [2];
	for (int i = 0; i < 2; i++) {
		matrix1[i] = new double[2];
		matrix2[i] = new double[2];
		result[i] = new double[2];
	}
	matrix1[0][0] = 1;
	matrix1[0][1] = -5;
	matrix1[1][0] = 0;
	matrix1[1][1] = 17;

	matrix2[0][0] = 1;
	matrix2[0][1] = -7;
	matrix2[1][0] = 0;
	matrix2[1][1] = 17;

	result[0][0] = 1;
	result[0][1] = 35;
	result[1][0] = 0;
	result[1][1] = 289;

	mult_matrix(matrix1, matrix2, 2);

	EXPECT_EQ(**result, **matrix1);

	for (int i = 0; i < 2; ++i) {
		delete[] matrix1[i];
		delete[] matrix2[i];
		delete[] result[i];
	}
	delete[] matrix1;
	delete[] matrix2;
	delete[] result;
}
//деление
TEST(TestMatrix, Test_div_matrix) {
	double** matrix1 = new double* [2];
	double** matrix2 = new double* [2];
	double** result = new double* [2];
	for (int i = 0; i < 2; i++) {
		matrix1[i] = new double[2];
		matrix2[i] = new double[2];
		result[i] = new double[2];
	}
	matrix1[0][0] = 4;
	matrix1[0][1] = 10;
	matrix1[1][0] = 42;
	matrix1[1][1] = 60;

	matrix2[0][0] = 4;
	matrix2[0][1] = 2;
	matrix2[1][0] = 21;
	matrix2[1][1] = 20;

	result[0][0] = 1;
	result[0][1] = 5;
	result[1][0] = 2;
	result[1][1] = 3;

	div_matrix(matrix1, matrix2, 2);

	EXPECT_EQ(**result, **matrix1);

	for (int i = 0; i < 2; ++i) {
		delete[] matrix1[i];
		delete[] matrix2[i];
		delete[] result[i];
	}
	delete[] matrix1;
	delete[] matrix2;
	delete[] result;
}
TEST(TestMatrix, Test_slpow_matrix) {
	double** matrix1 = new double* [2];
	double** matrix2 = new double* [2];
	double** result = new double* [2];
	for (int i = 0; i < 2; i++) {
		matrix1[i] = new double[2];
		matrix2[i] = new double[2];
		result[i] = new double[2];
	}
	matrix1[0][0] = 4;
	matrix1[0][1] = 10;
	matrix1[1][0] = 42;
	matrix1[1][1] = 60;

	matrix2[0][0] = 4;
	matrix2[0][1] = 2;
	matrix2[1][0] = 21;
	matrix2[1][1] = 20;

	result[0][0] = 20;
	result[0][1] = 14;
	result[1][0] = 483;
	result[1][1] = 460;

	slpow_matrix(matrix1, matrix2, 2);

	EXPECT_EQ(**result, **matrix1);

	for (int i = 0; i < 2; ++i) {
		delete[] matrix1[i];
		delete[] matrix2[i];
		delete[] result[i];
	}
	delete[] matrix1;
	delete[] matrix2;
	delete[] result;
}
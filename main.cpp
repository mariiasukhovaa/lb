#include "Header.h"
#include "Math_func/header_func.h"

#include <boost/program_options.hpp>

using namespace boost::program_options;

void on_array_size(int number)
{
	std::cout << "On array_size: " << number << '\n';
}
void on_matrix_size(int number)
{
	std::cout << "On matrix_size: " << number << '\n';
}

int main(int argc, const char* argv[]) {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int default_size = 17;//����������� �������� ��������
	int array_size = default_size;
	int matrix_size = 7;

	try//������ ����� ��������� ������
	{
		options_description desc{ "Options" };
		desc.add_options()
			("help,h", "Help screen")
			("matrix_size", value<int>()->notifier(on_matrix_size), "Matrix_size");//������ ������

		variables_map vm;

		store(parse_command_line(argc, argv, desc), vm);
		notify(vm);
		if (vm.count("help"))
			std::cout << desc << '\n';
		if (vm.count("help"))
			std::cout << desc << '\n';
		else if (vm.count("matrix_size")) {
			std::cout << "Matrix_size: " << vm["matrix_size"].as<int>() << '\n';
			matrix_size = vm["matrix_size"].as<int>();//���������� � ��� ������ �������� �� ��������� ������
		}

	}
	catch (const error& ex)
	{
		std::cerr << ex.what() << '\n';
	}

	//���� ������ � ���������

	double** matrix_int_B = new double* [matrix_size];
	double** matrix_int_A = new double* [matrix_size];
	for (int i = 0; i < matrix_size; i++) {
		matrix_int_B[i] = new double[matrix_size];
		matrix_int_A[i] = new double[matrix_size];
	}

	initialization(matrix_int_B, matrix_int_A, matrix_size);
	

	printf("������� A: \n");
	output_matrix(matrix_int_A, matrix_size);
	printf("������� B: \n");
	output_matrix(matrix_int_B, matrix_size);
	printf("��������: \n");
	sum_matrix(matrix_int_A, matrix_int_B, matrix_size);
	output_matrix(matrix_int_A, matrix_size);
	printf("���������: \n");
	difference_matrix(matrix_int_A, matrix_int_B, matrix_size);
	output_matrix(matrix_int_A, matrix_size);
	printf("���������: \n");
	mult_matrix(matrix_int_A, matrix_int_B, matrix_size);
	output_matrix(matrix_int_A, matrix_size);
	printf("�������: \n");
	div_matrix(matrix_int_A, matrix_int_B, matrix_size);
	output_matrix(matrix_int_A, matrix_size);
	printf("�������� � ��������� 2 �������: \n");
	slpow_matrix(matrix_int_A, matrix_int_B, matrix_size);
	output_matrix(matrix_int_A, matrix_size);


	system("pause");
	return 0;
}



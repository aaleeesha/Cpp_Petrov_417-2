#include <iostream> 
#include <locale.h> 
#include <iomanip> 
#include <bitset>

int main()
{
	setlocale(LC_ALL, "Russian");
	/*
	������ ������ matrix :
	-����������������
	- ���������, ��������, ������� �� ��������
	- ��������� ���� ������ ������������
	- ��������� ���� ������ ���������
	- ��������� ������� �� ������
	- ��������� ��������� ���� ��������
	- ��������� ��������� ���� ��������




	��� ������� ������ 3
	��� ������� ������ 3�3
	������� � ������� �������� ���������
	��� ���������� ��������������� �������� ��������� �����
	��� ����� ������ ����� ���������� ������� � �������
	��� ������ � ������� ������� ������ � ��������� ����� (�� ������� � ��������)
	� ������� �������� ��� ������-������� ��� ������-������



	�������
	1. �������� ��� ��� ����� �������� ������(�������� ������� / �������) ��� ��������
	2. �������� ��� ��� ���������� ���������� �������� �� ��������
	3. �������� ��� ��� ������ �������� � �������� ������, �������� � ������


	*/

	double matrix[100][100],
		stroka = 0,
		stolbik = 0;

	// ���� �������� �������

	std::cout << "������� ���������� ����� �������: ";
	std::cin >> stroka;

	std::cout << "������� ���������� �������� �������: ";
	std::cin >> stolbik;

	// ���� �������� �������

	for (int ix = 0; ix < stroka; ix++)
		for (int jx = 0; jx < stolbik; jx++)
		{
			std::cout << "matrix[" << (ix + 1) << "][" << (jx + 1) << "] = ";
			std::cin >> matrix[ix][jx];
		}

	// ���� �������� �������

	int vector[100];
	std::cout << "������� �������� �������:\n";

	for (int ix = 0; ix < stolbik; ix++)
	{
		std::cout << "vector[" << (ix + 1) << "] = ";
		std::cin >> vector[ix];
	}

	// ������ �������

	std::cout << "\n��������� �������:\n";
	for (int ix = 0; ix < stroka; ix++)
	{
		for (int jx = 0; jx < stolbik; jx++)
		{
			std::cout << matrix[ix][jx] << "\t";
		}
		std::cout << std::endl;
	}

	// ������ �������

	std::cout << "\n��������� ������:\n";
	for (int ix = 0; ix < stolbik; ix++)
	{
		std::cout << vector[ix] << "\t" << std::endl;
	}

	int vivod[100];

	for (int ix = 0; ix < stroka; ix++)
	{
		vivod[ix] = 0;
		for (int jx = 0; jx < stolbik; jx++)
		{
			vivod[ix] += matrix[ix][jx] * vector[jx];
			std::cout << vivod[ix] << std::endl;
		}
	}

	for (stolbik = 0; stolbik < 3; stolbik++)
	{
		for ()
		{

		}
	}



	std::system("pause"); // ����� ������� system() �� ����������� ����������
	return 0;
}
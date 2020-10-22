#include <iostream> 
#include <locale.h> 
#include <iomanip> 
#include <bitset>

int main()
{
	setlocale(LC_ALL, "Russian");
	/*
	Пустой проект matrix :
	-транспонирование
	- умножение, сложение, деление со скаляром
	- умножение двух матриц поэлементное
	- умножение двух матриц матричное
	- умножение матрицы на вектор
	- скалярное умножение двух векторов
	- векторное умножение двух векторов




	все вектора длиной 3
	все матрицы длиной 3х3
	матрицы и векторы задаются массивами
	для реализации математического действия применить циклы
	все этапы должны иметь поясняющую надпись в консоли
	при выводе в консоль матрицы печать в матричной форме (по строкам и столбцам)
	а векторы печатать как вектор-столбец или вектор-строку



	Задание
	1. Напмсать код для ввода исходных данных(элементы матрицы / вектора) для варианта
	2. Написать код для выполнения матричного действия по варианту
	3. Написать код для печати исходных и итоговых матриц, скаляров и матриц


	*/

	double matrix[100][100],
		stroka = 0,
		stolbik = 0;

	// Ввод размеров матрицы

	std::cout << "Введите количество строк матрицы: ";
	std::cin >> stroka;

	std::cout << "Введите количество столбцов матрицы: ";
	std::cin >> stolbik;

	// Ввод значений матрицы

	for (int ix = 0; ix < stroka; ix++)
		for (int jx = 0; jx < stolbik; jx++)
		{
			std::cout << "matrix[" << (ix + 1) << "][" << (jx + 1) << "] = ";
			std::cin >> matrix[ix][jx];
		}

	// Ввод значений вектора

	int vector[100];
	std::cout << "Введите элементы вектора:\n";

	for (int ix = 0; ix < stolbik; ix++)
	{
		std::cout << "vector[" << (ix + 1) << "] = ";
		std::cin >> vector[ix];
	}

	// Печать матрицы

	std::cout << "\nВведенная матрица:\n";
	for (int ix = 0; ix < stroka; ix++)
	{
		for (int jx = 0; jx < stolbik; jx++)
		{
			std::cout << matrix[ix][jx] << "\t";
		}
		std::cout << std::endl;
	}

	// Печать вектора

	std::cout << "\nВведенный вектор:\n";
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



	std::system("pause"); // вызов функции system() из стандартной библиотеки
	return 0;
}
// lab1.2.8(Sabalevskiy).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>
#include <cmath>

double f1(double a, double b, double c)
{
	double V = a * b * c;
	return V;
}

int main()
{
	double result1 = f1(2, 3, 4);
	std::cout << result1 << std::endl;
}

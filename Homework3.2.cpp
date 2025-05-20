#include <iostream>﻿
using namespace std;

int main()
{
	int num1, num2, num3;

	setlocale(LC_ALL, "");
	wcout << L"Введите первое число: " << endl;
	cin >> num1;
	wcout << L"Введите второе число: " << endl;
	cin >> num2;
	wcout << L"Введите третье число: " << endl;
	cin >> num3;

	int max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
	int min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
	int mid = (num1 + num2 + num3) - max - min;

	std:: wcout << L"Результат: " << max << ", " << mid << ", " << min << endl;

	return 0;
}
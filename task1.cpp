#include "pch.h"
#include <iostream>

using namespace std;

/*Напишите программу, которая ищет минимальное значение из двух чисел.*/

void task1() {
	int a;
	cout << "Введите первое число: ";
	cin >> a;

	int b;
	cout << "Введите второе число: ";
	cin >> b;

	cout << "-----Проверяем-----" << endl;
	
	if (a < b) {
		cout << "Наименьшее число: " << a;
	}
	else if (a > b) {
		cout << "Наименьшее число: " << b;
	}
	else
	{
		cout << "Числа равны";
	}
}
#include "pch.h"
#include "iostream"

using namespace std;

/*Напишите программу, которая проверяет, чётное ли число ввел пользователь.*/
void task3() {
	int x;
	cout << "Введите число: ";
	cin >> x;

	cout << "----- Проверяем -----" << endl;

	if (x % 2 == 0) {
		cout << "Число" << x <<  " — чётное";
	}
	else
	{
		cout << "Число " << x << " — не чётное";
	}
}
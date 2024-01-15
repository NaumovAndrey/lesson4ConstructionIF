#include "pch.h"
#include "iostream"

using namespace std;

/*Напишите программу, которая определяет уровень персонажа в компьютерной игре.
Пользователь вводит число «очков опыта», а программа вычисляет уровень.
Новый уровень даётся при достижении 1000, 2500 и 5000 «очков опыта».
Начальный уровень равен 1.*/

void task4() {
	int experiencePoints;
	cout << "Введите число очков опыта: ";
	cin >> experiencePoints;

	cout << "-----Считаем-----" << endl;

	if (experiencePoints >= 5000) {
		cout << "Ваш уровень: 3";
	}
	else if(experiencePoints >=2500)
	{
		cout << "Ваш уровень: 2";
	}
	else
	{
		cout << "Ваш уровень: 1";
	}
}
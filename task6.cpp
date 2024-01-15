#include "pch.h"
#include "iostream"

using namespace std;

/*Напишите программу, которая отвечает на вопрос хватает ли барберов в данном
городе если задано число людей и число барберов, а так же указано, что
один барбер работает 8 часов в день, на одного клиента тратит 1 час
а каждый клиент приходит раз в месяц.*/

void task6() {
	int countPerson; //кол людей в городе
	int countBarber; //кол барберов
	int costsPerCustomer = 1; //затраты на одного клиента, (час)
	int change = 8; // смена (час)

	cout << "Введите количество людей: ";
	cin >> countPerson;

	cout << "Введите количество барберов: ";
	cin >> countBarber;

	if (countPerson <= (countBarber * (change*costsPerCustomer) * 30)) {
		cout << "Да";
	}
	else
	{
		cout << "Нет";

	}
}
#include "pch.h"
#include <iostream>

using namespace std;

/*�������� ���������, ������� ���� ����������� �������� �� ���� �����.*/

void task1() {
	int a;
	cout << "������� ������ �����: ";
	cin >> a;

	int b;
	cout << "������� ������ �����: ";
	cin >> b;

	cout << "-----���������-----" << endl;
	
	if (a < b) {
		cout << "���������� �����: " << a;
	}
	else if (a > b) {
		cout << "���������� �����: " << b;
	}
	else
	{
		cout << "����� �����";
	}
}
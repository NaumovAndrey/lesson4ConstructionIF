#include "pch.h"
#include "iostream"

using namespace std;

/*�������� ���������, ������� ���������, ������� �� ���� ����� �� ������ ��� �������.*/
void task5() {
	int a;
	cout << "������� ������ �����: ";
	cin >> a;

	int b;
	cout << "������� ������ �����: ";
	cin >> b;

	cout << "-----���������-----" << endl;

	if (b == 0) {
		cout << "������ �� 0 ������" << std::endl;
	}
	else if (a % b==0) {
		cout << "��, " << a << " ������� �� " << b << " ��� �������!";
	}
	else
	{
		cout << "���, " << a << " �� ������� �� " << b << " ��� �������!";
	}
}
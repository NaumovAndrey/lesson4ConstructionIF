#include "pch.h"
#include "iostream"

using namespace std;

/*�������� ���������, ������� ���������� ������� ��������� � ������������ ����.
������������ ������ ����� ������ �����, � ��������� ��������� �������.
����� ������� ����� ��� ���������� 1000, 2500 � 5000 ������ �����.
��������� ������� ����� 1.*/

void task4() {
	int experiencePoints;
	cout << "������� ����� ����� �����: ";
	cin >> experiencePoints;

	cout << "-----�������-----" << endl;

	if (experiencePoints >= 5000) {
		cout << "��� �������: 3";
	}
	else if(experiencePoints >=2500)
	{
		cout << "��� �������: 2";
	}
	else
	{
		cout << "��� �������: 1";
	}
}
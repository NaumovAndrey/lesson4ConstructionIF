#include "pch.h"
#include "iostream"

using namespace std;

/*�������� ���������, ������� �������� �� ������ ������� �� �������� � ������
������ ���� ������ ����� ����� � ����� ��������, � ��� �� �������, ���
���� ������ �������� 8 ����� � ����, �� ������ ������� ������ 1 ���
� ������ ������ �������� ��� � �����.*/

void task6() {
	int countPerson; //��� ����� � ������
	int countBarber; //��� ��������
	int costsPerCustomer = 1; //������� �� ������ �������, (���)
	int change = 8; // ����� (���)

	cout << "������� ���������� �����: ";
	cin >> countPerson;

	cout << "������� ���������� ��������: ";
	cin >> countBarber;

	if (countPerson <= (countBarber * (change*costsPerCustomer) * 30)) {
		cout << "��";
	}
	else
	{
		cout << "���";

	}
}
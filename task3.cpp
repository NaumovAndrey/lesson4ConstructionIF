#include "pch.h"
#include "iostream"

using namespace std;

/*�������� ���������, ������� ���������, ������ �� ����� ���� ������������.*/
void task3() {
	int x;
	cout << "������� �����: ";
	cin >> x;

	cout << "----- ��������� -----" << endl;

	if (x % 2 == 0) {
		cout << "�����" << x <<  " � ������";
	}
	else
	{
		cout << "����� " << x << " � �� ������";
	}
}
//NestedFORs
#include<iostream>
using namespace std;
//#define MULTIPLICATION_TABLE
#define TABLE_PIFAGOR

void main()
{
	setlocale(LC_ALL, "");

#ifdef MULTIPLICATION_TABLE
		for (int i = 1; i <= 10; i++) // �������� (�������) ����
		{
			cout << "������� ��������� ��: " << i << endl;
		for (int j = 1; j <= 10; j++) // ��������� for
		{
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i*j << endl;
		}
	}
#endif //MULTIPLICATION_TABLE

#ifdef TABLE_PIFAGOR
		for (int i = 1; i <= 10; i++)
		{
			for (int j = 1; j <= 10; j++)
			{
				cout.width(5); //��� �������� ������ ������ ���� ������ � ���������������
				//���� ����� ��� ������ �������� ������, �� ��������� �������� ��������� �� ��������� ��������� ����
				//� ������ ������ 5 ������������
				cout << left;
				cout << i * j;
			}
			cout << endl;
		}

#endif //TABLE_PIFAGOR
}
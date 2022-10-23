//NestedFORs
#include<iostream>
using namespace std;
//#define MULTIPLICATION_TABLE
#define TABLE_PIFAGOR

void main()
{
	setlocale(LC_ALL, "");

#ifdef MULTIPLICATION_TABLE
		for (int i = 1; i <= 10; i++) // основной (внешний) цикл
		{
			cout << "Таблица умножения на: " << i << endl;
		for (int j = 1; j <= 10; j++) // вложенный for
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
				cout.width(5); //это свойство задает ширину поля вывода в закокомпозициях
				//если вывод был меньше заданной ширины, то следующее значение выведется за пределами заданного поля
				//в данном случае 5 знакопозиций
				cout << left;
				cout << i * j;
			}
			cout << endl;
		}

#endif //TABLE_PIFAGOR
}
//Geometria
#include<iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
#define TRIANGLE_4
//#define TABLE_1




void main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество звездочек: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++) //этот фор повторяет вывод строки на экран
	{
		for (int i = 0; i < n; i++)//этот фор выводит на экран строку из заданных звездочек
		{
			cout << "* ";
		}
		cout << endl; //после вывода строки переходит на новую строку
	}
#endif //SQUARE	
#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif //TRIANGLE_1
#ifdef TRIANGLE_2

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif //TRIANGLE_2
#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << "  ";
		for (int j = i; j < n; j++)cout << "* ";
		cout << endl;
	}
#endif //TRIANGLE_3

#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		//for (int j = 0; j < i; j++)cout << "* ";
		//for (int i = 1; i < n; i++)cout << "  ";
		//cout << endl;
	}
#endif //TRIANGLE_4

#ifdef TABLE_1
	int counter = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i+j) % 2 == 0)cout << "+ "; else cout << "- ";
			//((i+j) % 2 == 0) ? cout << "+ " : cout<< "- ";
			//(i+j) % 2 == 0 ? cout << "+ " : cout << "- ";
			//cout << ((i + j) % 2 == 0 ? "+ " : "- ");
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif //TABLE_1
}
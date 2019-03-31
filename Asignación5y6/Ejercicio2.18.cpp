#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	//entrada	
	int a;
	int b;
	cout << "Ingrese 1er número: ";
	cin >> a;
	cout << "Ingrese 2do número: ";
	cin >> b;
	/*
	Test
	a=6
	b=4
	*/
	//Logica y Salida
	if (a==b)
	{
		cout << "Estos numeros son iguales ";
	}
	else if (a>b)
	{
		cout << a << " Es mas grande ";
	}
	else
	{
		cout << b << " Es mas grande ";
	}	
	system("pause");
	return 0;




}
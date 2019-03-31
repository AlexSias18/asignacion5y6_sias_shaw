#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	//entrada	
	int a;
	int c;
	int b;
	int suma;
	int producto;
	int mayor;
	int menor;
	double promedio;
	cout << "Ingrese 1er número: ";
	cin >> a;
	cout << "Ingrese 2do número: ";
	cin >> b;
	cout << "Ingrese 3er número: ";
	cin >> c;
	/*
	Test
	a=2
	b=4
	c=3
	*/
	//Logica
	suma = a + b + c;	
	producto = a * b * c;
	promedio = (a+ b+c)/3;
	mayor = a;
	menor = b;
	if (b > a && b > c) {
		mayor = b;
	}
	else if (c>b && c>a) {
		mayor = c;
	}
	if (a<b && a <c) {
		menor = a;
	}
	else if (c < b && c < a) {
		menor = c;
	}
	//Salida
	cout << "La suma es: " << suma << endl;
	cout << "El promedio es: " << promedio << endl;
	cout << "El producto es: " << producto << endl;
	cout << "El mayor es: " << mayor << endl;
	cout << "El menor es: " << menor << endl;
	

	system("pause");
	return 0;




}

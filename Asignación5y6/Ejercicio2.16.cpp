#include <iostream>
#include <stdlib.h>

using namespace std;

int lo() 
{
	//entrada	
	int a;
	int b;
	int suma;
	int resta;
	int producto;
	double cociente;
	cout << "Ingrese 1er número: ";
	cin >> a;
	cout << "Ingrese 2do número: ";
	cin >> b;
	/*
	Test 
	a=4
	b=2
	*/
	//Logica
	suma = a + b;
	resta = a - b;
	producto = a * b;
	cociente = a / b;
	//Salida
	cout << "La suma es: " << suma<<endl;
	cout << "La resta es: " << resta << endl;
	cout << "El producto es: " << producto << endl;
	cout << "El cociente es: " << cociente << endl;	
	 
	system("pause");
	return 0;
	



}

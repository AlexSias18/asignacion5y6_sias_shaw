#include <iostream>

using namespace std;

/*
Test 1
tarifaHora=12
horasTrabajadas=2
Test 2
tarifaHora=11
horasTrabajadas=200
*/

int ejercicio7() {

	//2.Entrada
	int tarifaHoraria, horasTrabajadas;
	double sueldoBasico, sueldoBruto, sueldoNeto;

	const double cteBonificacion = 0.18;
	const double cteDescuento = 0.12;

	//3.Restricciones
	/*
	-Horas del trabajador > 0
	-Tarifa Horas trabajadas > 0
	*/

	//4.Lógica
	cout << "Ingresar la tarifa horaria:" << endl;
	cin >> tarifaHoraria;

	cout << "Ingrese el total de horas trabajadas:" << endl;
	cin >> horasTrabajadas;

	sueldoBasico = tarifaHoraria * horasTrabajadas;
	sueldoBruto = sueldoBasico + sueldoBasico * cteBonificacion;
	sueldoNeto = sueldoBruto - sueldoBruto * cteDescuento;
	//5.Salida
	cout << "Sueldo básico :" << sueldoBasico << endl;
	cout << "Sueldo bruto :" << sueldoBruto << endl;
	cout << "Sueldo neto :" << sueldoNeto << endl;

	cin.get();
	cin.get();
	return 0;
}
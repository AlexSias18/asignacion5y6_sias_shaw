#include <iostream>

using namespace std;

int main() {
	int radio;
	int diametro;
	int area;
	cout << "Ingrese Radio ";
	cin >> radio;
	diametro = radio * 2;
	area = 3.14159* radio*radio;
	cout << "Diametro: " << diametro<<endl;
	cout << "Area: " << area;

	system("pause");
	return 0;
	
}
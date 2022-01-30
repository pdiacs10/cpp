#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int a = 0;
	int b = 0;
	int suma = 0, restar = 0, multiplicar = 0, division = 0;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;
	cout << "Ingrese el valor de b: ";
	cin >> b;
	
	cout << endl;
	
	suma = a + b;
	restar = a - b;
	multiplicar = a * b;
	division = a / b;
	
	cout << "La suma de " << a << " + " << b << " = " << suma << endl;
	cout << "La resta de " << a << " - " << b << " = " << restar << endl;
	cout << "La multiplicaion de " << a << " * " << b << " = " << multiplicar << endl;
	cout << "La division entre de " << a << " / " << b << " = " << division << endl; 

	return 0;
}

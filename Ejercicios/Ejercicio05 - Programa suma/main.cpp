#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	//Entrada
	int a = 0;
	int b = 0;
	int resultado= 0;
	
	cout << "Ingrese el valor de a: ";
	cin >> a;
	cout << "Ingrese el valor de b: ";
	cin >> b;
	cout << endl;
	
	//Proceso
	resultado = a + b;
	
	//Salida
	cout << "La suma de a + b es: "<< resultado;
	 
	return 0;
}

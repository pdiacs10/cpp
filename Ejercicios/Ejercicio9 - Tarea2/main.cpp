#include <iostream>

using namespace std;

int main(int argc, char** argv) {

 //Datos de entrada
    double subtotal = 0;
    double total = 0;
    int descuento = 0;
    double impuesto = 0.15;
    double calculodeImpuesto = 0;
    double calculoImpuesto = 0;
    char exenta;
	
	cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;
    cout << "La factura exenta? Escriba S/N: ";
    cin >> exenta;

  //Proceso exento
    if (exenta == 's' || exenta == 'S')
    {
  		calculodeImpuesto = (subtotal * descuento) / 100;	    	
		calculoImpuesto = (subtotal - calculodeImpuesto) * 0.00;	
    	total = subtotal - calculodeImpuesto + calculoImpuesto;
	}
	
//Proceso no exento
	 if (exenta == 'n' || exenta == 'N')
    {
  		calculodeImpuesto = (subtotal * descuento) / 100;	    	
		calculoImpuesto = (subtotal - calculodeImpuesto) * impuesto;	
  	 	total = subtotal - calculodeImpuesto + calculoImpuesto;
	}

//Salida
    cout << exenta << endl;
     cout << endl;
    cout << "Total a pagar es: " << total;
	return 0;
}

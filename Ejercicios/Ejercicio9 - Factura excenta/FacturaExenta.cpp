#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Datos de entrada
    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char exenta = 0;

    cout << "Ingrese el subtotal de la factura: ";
    cin >> subtotal;
    cout << "Ingrese el descuento (0, 10, 15, 20): ";
    cin >> descuento;
    cout << "¿El factura exenta? Escriba s/n: ";
    cin >> exenta;
    cout << endl;

    //Proceso
    if(exenta = 's' || exenta = 's')
    {
        calculoDescuento = (subtotal * calculoDescuento) / 100;
    }
        else
        {
           calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
        }

       
       total = subtotal - calculoDescuento + calculoImpuesto;

    /*calculoDescuento = (subtotal * descuento) / 100;
    calculoImpuesto = (subtotal - calculoDescuento) * 0.15;
    total = subtotal - calculoDescuento + calculoImpuesto;*/

    //Salida
    cout << endl;
    cout << "Total a pagar es: " << total;
    return 0;
}

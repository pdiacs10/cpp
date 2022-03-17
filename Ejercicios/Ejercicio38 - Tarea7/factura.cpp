#include <iostream>


using namespace std;

double subtotal;
double impuesto;
double total;
string listaProductos;

void agregarProductos( string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n'; 
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    total = subtotal + impuesto;
}

void imprimirFactura() 
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Producto:" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << "Impuesto a pagar (15%): " << impuesto;
    cout << endl;
    cout << "Total: " << total;
    cout << endl;
    system("pause");
}
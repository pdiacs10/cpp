#include <iostream>

using namespace std;

double subtotal;
string listaProductos;

void agregarProductos( string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n'; 
    subtotal = subtotal + (cantidad * precio);
}

void imprimirFactura() 
{
    system("cls");
    cout << "*******" << endl;
    cout << "FACTURA" << endl;
    cout << "*******" << endl;
    cout << endl;

    cout << "Producto:" << endl;
    cin >> listaProductos;

    cout << endl;
    cout << "Subtotal:" << subtotal;
    cout << endl;
    cout << endl;
    system("pause");
}
#include <iostream>

using namespace std;

double subtotal;
double impuesto;
double total;
string listaProductos;
double extras = 80;

string nombreCompleto(string nombre, string apellido) 
{
    return nombre + " " + apellido;
}
string Direccion(string direccion) 
{
    return direccion;
}

string Telefono(string Telefono) 
{
    return Telefono;
}

void agregarProductos( string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + '\n'; 
    subtotal = subtotal + (cantidad * precio);
    impuesto = subtotal * 0.15;
    extras = extras; 
    total = subtotal + impuesto + extras;
    
}

void imprimirFactura() 
{
    string primerNombre = "";
    string primerApellido = "";
    string direccion = "";
    char telefono[20];

    system("cls");
    cout << "C L I E N T E S" << endl;
    cout << "===============" << endl;
    cout << endl;
    cout << "Nombre: " ; cin >> primerNombre;
    cout << "Apellido: "; cin >> primerApellido;
    system("pause");

    system("cls");
    cout << "E N V I A S" << endl;
    cout << "===========" << endl;
    cout << endl;
    cout << "Direccion: "; cin >> direccion;
    cout << "";
    cout << "Telefono: "; cin >> telefono;
    system("pause");

    cout << endl;
    system("cls");

    cout << endl;
    cout << "=============" << endl;
    cout << "F A C T U R A" << endl;
    cout <<"==================================================================" << endl;
    cout <<"Nombre Completo: " << nombreCompleto(primerNombre,primerApellido); 
    cout << endl;
    cout << "Direccion: " << Direccion(direccion);
    cout << endl;
    cout << "Telefono: " << Telefono(telefono);
    cout << endl;
    cout << "================================================================" << endl;

    cout << "Producto:" << endl;
    cout << listaProductos;

    cout << endl;
    cout << "Subtotal: " << subtotal;
    cout << endl;
    cout << "Impuesto a pagar (15%): " << impuesto;
    cout << endl;
    cout << "Envios SPS L80.00: " << extras;
    cout << endl;
    cout << "Total: " << total;
    cout << endl << endl << endl;

    system("pause");
}
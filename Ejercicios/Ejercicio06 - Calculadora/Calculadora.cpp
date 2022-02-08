#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    //Datos de entrada
    int a = 0;
    int b = 0;
    int suma = 0, restar = 0, multiplicar = 0, dividir = 0;

    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << endl;

    //Proceso
    suma = a + b;
    restar = a - b;
    multiplicar = a * b;
    dividir = a / b;

    //Salida
    cout << "La suma de " << a << " + " << b << " = " << suma << endl;
    cout << "La resta de " << a << " - " << b << " = " << restar << endl;
    cout << "La multipliacion de " << a << " * " << b << " = " << multiplicar << endl;
    cout << "La divison entre " << a << " / " << b << " = " << dividir << endl;

    return 0;
}

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double raizCuadrado = 0;
    int numero = 0;

    cout << "Ingrese un numero de Raiz Cuadrado es: ";
    cin >> numero;

    raizCuadrado = sqrt(numero);

    cout << "La Raiz Cuadrado es: " << raizCuadrado; 
    return 0;
}

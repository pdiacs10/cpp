#include <iostream>

using namespace std;
 
int main(int argc, char const *argv[])
{
    int opcion = 0;

    while (true)
    {
        system("cls");

        cout << "****" << endl;
        cout << "MENU" << endl;
        cout << "****" << endl << endl;

        cout << "1 - Bebidas Calientes" << endl;
        cout << "2 - Bebidas Helados" << endl;
        cout << "3 - Reposteria" << endl;
        cout << "0 - Salir" << endl;

        cout << "Ingrese usa opcion entre 1 -3: ";
        cin >> opcion;
    
    if (opcion == 0)
    {
        break;
    }
    if (opcion == 1)
     {
         system("cls");
         cout << "******************" << endl;
         cout << "BEBIDAS CALIENTES" << endl;
         cout << "******************" << endl;
         system("pause");
     }
    if (opcion == 2)
     {
         system("cls");
         cout << "******************" << endl;
         cout << "BEBIDAS HELADOS" << endl;
         cout << "******************" << endl;
         system("pause");
     }
    if (opcion == 3)
     {
         system("cls");
         cout << "******************" << endl;
         cout << "REPOSTERIA" << endl;
         cout << "******************" << endl;
         system("pause");
     }     
     
     if (opcion < 0 || opcion > 3) {
         system("cls");
         cout << "Ingrese una opcion valida" << endl;
         system("pause");
        }
    } 
    
    return 0;
}
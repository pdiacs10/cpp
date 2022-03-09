#include <iostream>

using namespace std; 

extern void agregarProductos( string descripcion, int cantidad, double precio);
 
void productos(int opcion) 
{
    system("cls");

    int opcionPrducto;

    switch (opcion)
    {
        case 1:
        {
            cout << "BEBIDAS CALIENTES" << endl;
            cout << "*****************" << endl;
            cout << "1 - Capuccion" << endl;
            cout << "2 - Expresso" << endl;
            cin >> opcionPrducto;
                
            switch (opcionPrducto)
            {
            case 1:
                agregarProductos("Capuccion", 1, 40);
                break;
             case 2:
                agregarProductos("Expresso", 1, 30);
                break;
                
            default:
                cout << "opcion no valida";
                break;
            }
        
            system("pasue");
            break;
        }
        case 2:
        {
            cout << "BEBIDAS FRIAS" << endl;
            cout << "*************" << endl;
            system("pause");
            break;
        }
        case 3:
        {
            cout << "REPOSTERIA" << endl;
            cout << "**********" << endl;
            system("pause");
            break;
        }
        default:
            break;
        }

}
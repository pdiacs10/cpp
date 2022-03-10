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
        cout << "*****************" << endl << endl;
        cout << "1 - Capuccion" << endl;
        cout << "2 - Expresso" << endl;
        cout << endl;

        cout << "Ingrese una opcion: ";
        cin >> opcionPrducto;
                
        switch (opcionPrducto)
        {
        case 1:
            agregarProductos("1 Capuccion - L 40.00", 1, 40);
            break;
        case 2:
            agregarProductos("1 Expresso - L 30.00", 1, 30);
            break;    
        default:
            {
                cout << "opcion no valida";
                return;
                break;
            }
        }

        cout << endl;
        cout << "Producto agregado" << endl << endl;
        system("pause");
        
        break;
    }
        case 2:
        {
            cout << "BEBIDAS FRIAS" << endl;
            cout << "*************" << endl << endl;
            cout << "1 - Mochaccino" << endl;
            cout << "2 - Granita de coffee" << endl;
            cout << "3 - Iced tea" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionPrducto;
                
            switch (opcionPrducto)
            {
            case 1:
                agregarProductos("1 Mochaccino - L 30.00", 1, 30);
                break;
            case 2:
                agregarProductos("1 Granita de coffee - L 45.00", 1, 45);
                break;
            case 3:
                agregarProductos("1 Iced tea - L 45.00", 1, 45);
                break;    
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
        
            break;
        }
         case 3:
        {
            cout << "REPOSTERIAS" << endl;
            cout << "***********" << endl << endl;
            cout << "1 - Sandwich con huevo" << endl;
            cout << "2 - Chilena leche" << endl;
            cout << "3 - Galleta de mantequilla" << endl;
            cout << endl;

            cout << "Ingrese una opcion: ";
            cin >> opcionPrducto;
                
            switch (opcionPrducto)
            {
            case 1:
                agregarProductos("1 Sandwich con huevo- L 30.00", 1, 30);
                break;
            case 2:
                agregarProductos("1 Chilena leche - L 15.00", 1, 15);
                break;
            case 3:
                agregarProductos("1 Galleta de mantequilla - L 25.00", 1, 25);
                break;    
            default:
                {
                    cout << "opcion no valida";
                    return;
                    break;
                }
            }

            cout << endl;
            cout << "Producto agregado" << endl << endl;
            system("pause");
        
            break;
        }
    default:
        break;
    }
}
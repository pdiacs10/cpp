#include <iostream>
#include "AgregarProductos.h"

using namespace std;

void productos(int opcion) {

    system("cls");
    
    int OpcionMenu;
    int OpcionS;
    
    cout << "P R O D U C T O S   S O L I C I T A D O S" << endl;
    cout << "=========================================" << endl;
    cout << "1 - Restaurantes" << endl;
    cout << "2 - Super" << endl;
    cout << "3 - Farmacias" << endl;
    cout << "4 - Tienda" << endl;
    cout << endl;
    
    cout << " Ingrese una opcion: ";
    cin >> OpcionMenu;

    switch (OpcionMenu) {

     case 1 : 
    {
        system("cls");
        cout << "R E S T A U R A N T E S" << endl;
        cout << "=======================" << endl;
        cout << "1 - Comidas" << endl;
        cout << "2 - Cafe y panaderias" << endl;
        cout << endl;
        
        cout << "Ingrese una opcion: ";
        cin >> OpcionS;

        switch (OpcionS) {
        case 1:
            comida(OpcionS);
            break;
        case 2:
            Cafe(OpcionS);
            break; 

        default:
            cout << "\tOpcion invalidad";
            return;
            break;

        }

        break;
    }

     case 2:  
     {
        Super(OpcionS); 
        break;
     }   
   
    case 3: {
        Farmacia(OpcionS);
        break;
    }

    case 4:
    {
        system("cls");
        cout << "T I  E N D A " << endl;
        cout << "==============" << endl;
        cout << "1 - Hush Natural" << endl;
        cout << "2 - Mascotas" << endl;
        cout << "3 - Hogar y ferreteria" << endl;
        cout << endl;
        cout << "Ingrese una opcion: "; cin >> OpcionS;
        Tienda(OpcionS);
        break;
    }
    default:
        break;
    
    } 

}
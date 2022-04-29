#include <iostream>

using namespace std;

extern void productos(int opcion);
extern void imprimirFactura();
extern void Tarifar();

void menu() {

    int opcion = 0;

    while(true) {
        system("cls");

        cout << "S I S T E M A   D E    D E L I V E R Y" << endl;
        cout << "======================================" << endl << endl;
        cout << "1 - Productos solicitados" << endl;
        cout << "2 - Total envias" << endl;
        cout << "0 - Salir" << endl;
        cout << endl;
            
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            productos(opcion);
            break;
        case 2:
            imprimirFactura();
            break;
               
        }  
        if(opcion == 0) {
            break;
        }
    }  
} 
        

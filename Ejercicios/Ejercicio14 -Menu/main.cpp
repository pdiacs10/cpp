#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int opcion = 0;
	
	while(true) {
		system("cls");
		cout << "****" << endl;
		cout << "MENU" << endl;
		cout << "****" << endl;
		
		cout << endl;
		cout << "1 - Cafe y Garanita" << endl;
		cout << "2 - Reposteria" << endl;
		cout << "0 - Salir" << endl;
		 
		cout << "Ingrese una opcion del menu: ";
		cin >> opcion;
		
		if(opcion == 1) {
			system("cls");
			cout << " Estas en el menu de cafe y garanita" << endl;
			system("pause");
		}
		
		if(opcion == 2) {
			system("cls");
			cout << " Estas en el menu de reposteria" << endl;
			system("pause");
		}
		
		if(opcion == 0) {
			break;
		}
	}
	cout << endl;
	cout <<"Salirste del sistema" << endl;
	return 0;
}
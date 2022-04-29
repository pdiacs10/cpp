#include <iostream>
#include "menu.h"

using namespace std;

bool login(){
    string password = "";
    int intentos = 0;

    while (intentos <= 2) {
        system("cls");

        cout << "Nombre de usuario o direccion de correo electronico: ";
        cin >> password;

        while (intentos == 1) {
            cout << "Password incorrecta" << endl;

            return false;
        }
    
        if (password == "a") {
            system("cls");
            menu();
            return true;
        }
        intentos++;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    login();
    menu();

    return 0;
}

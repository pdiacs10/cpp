#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	//ENTRADA
    int pares = 0;
    int impares = 0;
    int total = 0;

	// DATOS DE PROCESO: CICLO FOR SUMA DE PARES E IMPARES Y TOTAL
    for(int i = 1; i <= 10; i++) 
    {
        if(i % 2 == 0) {
            pares = pares + i;
        } else {
        	impares =  impares + i;	
		}
		
		if(i % 1 == 0) {
            total = total + i;
        }
        cout << i << " ";
    }
    
    //SALIDA
    cout << endl;
    cout << endl;
    cout << "Pares = " << pares << endl;
    cout << "Impares = " << impares << endl;
    cout << "Total = " << total << endl;

    return 0;
}

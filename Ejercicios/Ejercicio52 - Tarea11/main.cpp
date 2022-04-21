#include <iostream>
#include <time.h>
#include <stdlib.h>
 
using namespace std;

int random();

int main()
{
    int fil = 5, col = 5, suma = 0;
    srand(time(NULL));
 
    int matriz[fil][col];
 
    for (int i = 0; i < fil; i++)
        for (int j = 0; j < col; j++)
        {
            matriz[i][j] = random();
            suma += matriz[i][j];
        }
 
    cout << "\t Arreglo Bidimensional 5x5" << endl << endl;

    for (int i = 0; i < fil; i++)
    {
        for (int j = 0; j < col; j++)
        {
          cout << "\t" << matriz[i][j];
        }
        cout << endl;
    }
 
    cout << "\n Total suma: " << suma;
 
    return 0;
}
 
int random()
{
    return rand() % 10 + 1;
}

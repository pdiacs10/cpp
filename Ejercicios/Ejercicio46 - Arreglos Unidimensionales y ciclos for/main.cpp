#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numero[5]; 
    // int indice = 3;
    // numero[indice] = 50;
    // cout << numero[indice] << endl;
    
    for (int i = 0; i < 5; i++)
    {
        numero[i] = i;
    }
    
    for (int i = 0; i < 5; i++)
    {
        cout << numero[i] << endl;
    }
    
    return 0;
}
#include <iostream>

using namespace std;

extern int sumar(int a, int b);

int sumar(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    system("cls");

    cout << sumar(5, 7);
    cout << endl;

    return 0;
}
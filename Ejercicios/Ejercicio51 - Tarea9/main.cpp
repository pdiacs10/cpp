#include <iostream>
#include <ctime>
#include <cstdlib>

int input (int cant)
{
  if (cant == 1)
    {
      std::cout << "Ingrese lanzar el dado 1: ";
    }
  else
    {
      std::cout << "Ingrese lanzar el dado 2: ";
    }
  std::cin.ignore ();
}


int tirardado ()
{
  int ran;
  srand (time (NULL));
  ran = rand () % 6 + 1;
  std::cout << "Obtuvo " << ran << std::endl;
  return ran;
}


int dado (int pdado, int sdado)
{
  std::cout << "Ha avanzado " << pdado + sdado << " casillas" << std::endl;
  return pdado + sdado;
}



int main ()
{
  int total, dado1, dado2;

  input (1);
  dado1 = tirardado ();
  input (2);
  dado2 = tirardado ();
  total = dado(dado1, dado2);
  return 0;
}

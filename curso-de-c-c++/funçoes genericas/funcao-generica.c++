#include <iostream>
#include <conio.h>
#include <stdarg.h>
#include <string>

using namespace std;

int soma(int contador, ...);

int main(int argc, char const *argv[])
{
  
  cout << soma(4, 1, 5, 5);
  

  getch();
  return 0;
}

int soma(const int contador, ...)
{

  va_list lista;
  int total = 0;

  va_start(lista, contador);
  for (int i = 0; i < contador; i++)
  {
    total += va_arg(lista, int);
  }
  va_end(lista);
  return total;
}

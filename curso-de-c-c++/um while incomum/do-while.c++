#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int numero = 0;

  do
  {
    numero++;
    cout<<numero<<endl;
  } while (numero < 10);
  
  getch();
  return 0;
}

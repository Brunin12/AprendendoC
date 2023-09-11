// funciona em ( C e C++ )
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void mostra_numero(int &) ;

int main(int argc, char const *argv[])
{
  system("cls");
  system("color 5A");
  system("title Parametros");
  int numero = 9;
  cout<<"digite um numero"<<endl;
  cin >> numero;

  mostra_numero(numero);
  
  cout<<"numero da main() : " << numero<<endl;

  getch();
  return 0;
}


void mostra_numero( int &numero ) {
  numero++;
  cout <<"Numero digitado + 1 : "<< numero << endl;

}


//cabo :)



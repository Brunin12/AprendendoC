#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  
  int a, b;
  int add, sub, mult;
  float div, res;

  cout << "digite um numero" << endl;
  cin >> a;
  cout << "digite outro numero" << endl;
  cin >> b;

  //somar 

  add = a + b;

  // subtrair

  sub = a - b;

  // multiplicar

  mult = a * b;

  // dividir

  div = a / b;

  // resto

  res = a % b;

  // Output ===========>

  cout << "soma: " << add << endl;
  cout << "subtracao: " << sub << endl;
  cout << "multiplicacao: " << mult << endl;
  cout << "divisao: " << div << endl;
  cout << "resto: " << res << endl;

  getch();
  return 0;
}

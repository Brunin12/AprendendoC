#include <iostream>
#include <conio.h>

using namespace std;

int main() {
  int a;
  int b;
  int tmpa;

  cout << "digite um numero para A" << endl;

  cin >> a;

  cout << "digite um numero para B" << endl;

  cin >> b;

  tmpa = a;

  a = b;
  b = tmpa;

  cout << "o valor de A e " << a << endl;
  cout << "o valor de B e " << b << endl;

  getch();
  return 0; 
}
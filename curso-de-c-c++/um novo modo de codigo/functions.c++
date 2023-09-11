// TIPODADOiona em ( c++ e c )
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int soma(int n1, int n2);
void print(string msg);

int main()
{

  int num1;
  int num2;

  print("digite um numero");
  cin >> num1;
  print("digite outro numero");
  cin >> num2;
  cout << soma(num1, num2)<< endl;

  getch();
  return 0;
}

void print(string msg)
{
  cout << endl;
  cout << msg << endl;
}

int soma(int n1, int n2)
{
  return n1 + n2;
}
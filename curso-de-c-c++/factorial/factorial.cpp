#include <iostream>
#include <conio.h>


using namespace std;

int fatorial( int n );

int main(int argc, char const *argv[])
{

  int n = 0;
  system("color 09");
  system("title Fatorial em C++");

  cout << "digite um numemero que voce quer saber o fatorial ( sintax: 1 ate numero digitado) "<<endl;

  cin >> n;

  for (int in = 1; in<=n;in++) {

    cout << "FATORIAL DE " << in << " = ";
    cout << fatorial(in) << endl;
  }




  getch();
  return 0;
}

int fatorial(int n) {
  if (n < 2) return 1;


  return fatorial(n - 1) * n;
}
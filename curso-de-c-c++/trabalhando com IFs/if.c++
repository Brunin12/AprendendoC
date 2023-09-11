#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

  int num;
  cout << "digite um numero" << endl;
  cin >> num;

  if (num != 10) {
    cout<<"o numero e diferente de 10"<<endl;
  } else {
    cout << "o numero e igual a 10" << endl;
  }

  getch();
  return 0;
}

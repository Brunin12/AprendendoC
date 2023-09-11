#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPODADO>
TIPODADO funcao(TIPODADO n1);

int main(int argc, char const *argv[])
{

  cout << funcao(10);
  cout<<endl;
  cout << funcao(4.33444);
  cout << endl;

  getch();
  return 0;
}

template <class TIPODADO>
TIPODADO funcao(TIPODADO n1)
{
  if (typeid(n1).name() == typeid( int ).name()) {
    cout<<"inteiro"<<endl;
  }

  if (typeid(n1).name() == typeid( double ).name())
  {
    cout << "double" << endl;
  }

  //cout<<typeid(n1).name()<<endl;

  return ++n1;
}

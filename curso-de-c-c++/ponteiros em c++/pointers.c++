// so funciona em c++ e c

#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{

  int num = 6;
  int *pto;

  pto = &num;

  cout << "valor da variavel num: " << num << endl;
  cout << "posisao da variavel num na memoria: " << &num << endl;

  cout << "com o posisao via ponteiro: " << *pto << endl;
  cout << "com o valor via ponteiro: " << pto << endl;


  getch();
  return 0;
}

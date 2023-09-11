#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{

  int lista[10] = {6, 12, 18, 24, 30, 36, 42, 48, 54, 60};

  char frase[10] = "ola mundo";

  for (int i = 1; i < 10; i++) {
    cout << lista[i]<<endl;
  }

  for (int index=0; index < sizeof(frase) - 1; index++) {
    cout<<frase[index];
  }

  getch();
  return 0;
}

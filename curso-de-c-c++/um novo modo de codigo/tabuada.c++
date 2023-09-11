#include <iostream>
#include <conio.h>

using namespace std;

void tabuada(int n, int min, int max);

int main()
{
  int num;
  int min;
  int max;

  while (true) {

    cout << "digite um numero" << endl;
    cin >> num;
    cout << "minimo" << endl;
    cin >> min;
    cout << "maximo" << endl;
    cin >> max;
    tabuada(num, min, max);
    cout << "digte qualquer numero inteiro para re-iniciar a tabuada (digite 0 para parar)"<<endl;
    int stop;
    cin >> stop;
    if (stop == 0) {
      exit(0);
    }
    system("clear||cls");
  }
  getch();
  return 0;
}

void tabuada(int n, int min, int max)
{
  cout << "(V)======= tabuada do " << n << " ========(V)" << endl;
  if (min < max)
  {
    for (int i = min; i <= max; i++)
    {
      int res = n * i;
      cout << "(V)========= " << n << " x " << i << " = " << res << " =========(V)" << endl;
    }
  }
  else
  {
    if (min == max)
    {
      cout << "erro, minimo e igual o maximo" << endl;
    }
    else
    {
      for (int i = min; i >= max; i--)
      {
        int res = n * i;
        cout << "(V)========= " << n << " x " << i << " = " << res << " =========(V)" << endl;
      }
    }
  }
}
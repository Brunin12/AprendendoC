#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int i;
  printf("linhas -------- colunas \n");
  for (i = 0; i<10; i++) {
    printf("%d - ", i);

    for (int j = 0; j < 10; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }

  getch();
  return 0;
}

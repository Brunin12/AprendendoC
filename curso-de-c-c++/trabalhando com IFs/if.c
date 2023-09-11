#include <stdio.h>
#include <conio.h>

int main()
{

  int num;

  printf("digite um numero \n");

  scanf("%d", &num);

  if (num != 10)
  {
    printf("o numero e diferente de 10\n");
  }
  else
  {
    printf("o numero e igual a 10\n");
  }

  getch();
  return 0;
}

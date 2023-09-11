#include <stdio.h>
#include <conio.h>

int main()
{

  int n1;
  printf("digite um numero de 1 a 5 \n");
  scanf("%d", &n1);

  switch (n1)
  {
  case 1:
    printf("One \n");
    break;
  case 2:
    printf("Two \n");
    break;
  case 3:
    printf("Three \n");
    break;
  case 4:
    printf("Four \n");
    break;
  case 5:
    printf("Five \n");
    break;

  default:
    printf("erro digite um numero de 1 a 5 \n");
    break;
  }

  getch();
  return 0;
}

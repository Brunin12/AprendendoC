#include <stdio.h>


int main(void)
{
  
  int a, b, c;

  printf("digite um valor para a");
  scanf(a);
  printf("digite um valor para b");
  scanf(b);
  c = a;
  a = b;
  b = c;
  printf("a: ", a);
  printf("b: ", b);
  
  return 0;
}

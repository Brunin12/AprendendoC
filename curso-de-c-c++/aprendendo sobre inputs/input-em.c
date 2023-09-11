#include <stdio.h>

int main(void)
{
  char *nome = "Brunin";
  // o *nome e pra criar uma string em c
  scanf("%s", &nome);

  printf("o valor do nome e %s\n", nome);

  getchar();
  return 0;
}


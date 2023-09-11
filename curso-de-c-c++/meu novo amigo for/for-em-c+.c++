#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main(int argc, char const *argv[])
{
  
  int i;

  for (i = 0; i <= 10; i++) {
    printf("estamos na volta for %d\n", i);
    Sleep(1000);
  }
  printf("fim");
  getch();
  return 0;
}

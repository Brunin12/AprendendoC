#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main(int argc, char const *argv[])
{
  for(int b = 0; b <= 31; b++) {
    printf("=");
  }

  printf("\n");
  printf("===== RESTAURANTE DO ZEZIN =====\n");

  for (int b = 0; b <= 31; b++)
  {
    printf("=");
  }
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");
  printf("\n");

  int num = 0;
  int carne, sprite, coca, arroz, feijao,
      pure, batata, lasanha, brocolis, alface;
      float preco = 0;

  // faça enquanto num for menor que 10
  while (num != 11)
  {
    printf("\n\n\n");
    printf("menu \n");
    printf("1. carne\n");
    printf("2. sprite \n");
    printf("3. coca-cola \n");
    printf("4. arroz (1kg)\n");
    printf("5. feijao \n");
    printf("6. pure \n");
    printf("7. batata frita (x12) \n");
    printf("8. lasanha \n");
    printf("9. brocolis \n");
    printf("10. alface \n");

    printf("digite o numero (11 para sair do loop)\n");
    cin >> num;
    // anota os pedidos
    switch (num)
    {
    case 1:
      printf("garcom - anotado\n"); 
      preco += 30.7;
      break;
    case 2:
      printf("garcom - anotado\n");    
      preco += 12.4;
      break;
    case 3:
      printf("garcom - anotado\n");
      preco += 10.2;
      break;
    case 4:
      printf("garcom - anotado\n"); 
      preco += 19.8;
      break;
    case 5:
      printf("garcom - anotado\n");    
      preco += 20.82;
      break;
    case 6:
      printf("garcom - anotado\n");
      preco += 16.84;
      break;
    case 7:
      printf("garcom - anotado\n");
      preco += 10.84;
      break;
    case 8:
      printf("garcom - anotado\n");
      preco += 20.41;
      break;
    case 9:
      printf("garcom - anotado\n");
      preco += 7.68;
      break;
    case 10:
      printf("garcom - anotado\n");
      preco += 6.9;
      break;
    case 11:
      printf("okay entao jaja eu trago a conta\n");
      carne++;
      break;

    default:
      printf("erro, comida não encontrada \n");
      break;
    }
  }

  // espere um keypress
  if (preco == 0)
  {
    printf("voce não pedio nada\n");
  }
  else

  {
    Sleep(3000);
    printf("o garcom sai...\n");
    Sleep(6000);
    printf("voce - que fome, vou comer logo kkkk\n");
    Sleep(4000);
    printf("*comendo* ...\n");
    Sleep(4000);
    printf("*termina*\n");
    Sleep(3000);
    printf("garcom - oi, eu vi que voce terminou a comida, aqui esta a conta!\n");

    Sleep(800);
    printf("a pagar:\n");

    Sleep(800);
    printf("total: %f\n", preco);
  }

  getch();
  return 0;
}
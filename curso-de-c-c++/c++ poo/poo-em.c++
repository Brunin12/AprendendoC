// funciona em ( c++ )
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;


// as classes usam sempre Upper Camel Case
class Pessoa
{
private:
  int idade = 50;
  string id = "nao configurado";
  string nome = "nao configurado";

public:
  void paiNome()
  {
    system("cls || clear");
    cout << nome << endl;
    getch();
  }

  void paiIdade()
  {
    system("cls || clear");
    cout << idade << endl;
    getch();
  }

  void paiID()
  {
    system("cls || clear");
    cout << id << endl;
    getch();
  }

  void set()
  {
    system("cls || clear");
    int choise;
    cout << "Oque deseja configurar?\n1. nome\n2.idade\n3.id" << endl;
    cin >> choise;

    switch (choise)
    {
    case 1:
      system("cls || clear");
      cout << "digite o nome do seu pai" << endl;
      cin >> nome;
      break;
    case 3:
      system("cls || clear");
      cout << "digite o id do seu pai" << endl;
      cin >> id;
      break;
    case 2:
      system("cls || clear");
      cout << "digite a idade do seu pai" << endl;
      cin >> idade;
      break;

    default:
      cout << "erro, funcao nao encontrada" << endl;
      break;
    }
  }
};

int main(int argc, char const *argv[])
{

  
  Pessoa pai;

  system("title Pai simulator");

  int escolha;
  while (true)
  {
    system("cls || clear");
    cout << "oque fazer?\nconfigurar 'pai' ( 1 )\nmostrar nome ( 2 )\nmostrar id ( 3 )\nmostrar idade ( 4 )\n"
         << endl;

    cin >> escolha;

    if (escolha == 1)
    {
      pai.set();
    }
    else
    {
      if (escolha == 2)
      {
        pai.paiNome();
      }
      else
      {
        if (escolha == 3)
        {
          pai.paiID();
        }
        else
        {
          if (escolha == 4)
          {
            pai.paiIdade();
          }
          else
          {
            cout << "erro, funcao nao encontrada" << endl;
          }
        }
      }
    }
  }

  getch();
  return 0;
}

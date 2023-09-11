#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

struct clientes
{

  int clienteId;
  string nome;
  int idade;
  string nome_c[100];
  int idade_c[100];
  int id_c[100];

  int cad;
  string chef_name;
};

int exitado()
{

  clientes meu_cliente;

  int i = meu_cliente.cad;

  cout << meu_cliente.chef_name << " cadastramos no total " << i << " clientes, eles sao" << endl;
  cout << "nomes      idades      IDs" << endl;
  for (int j = 0; j < i; j++)
  {
    cout << meu_cliente.nome_c[j] << meu_cliente.idade_c[j] << meu_cliente.id_c[j] << endl;
  }
  getch();
  exit(0);
  return 0;
}

int main(int argc, char const *argv[])
{

  string exite;
  clientes meu_cliente;

  int count = 0;

  string chef_name = meu_cliente.chef_name;

  printf("Clientes empresarial config\n");
  printf("ola, qual seu nome?\n");
  cin >> chef_name;
  cout << "okay " << chef_name << " vamos comecar!!!!" << endl;

  while (true)
  {
    count++;

    meu_cliente.clienteId = count;
    meu_cliente.id_c[count] = meu_cliente.clienteId;

    printf("nome do cliente ", count);
    cin >> meu_cliente.nome;
    meu_cliente.nome_c[count] = meu_cliente.nome;
    cout << "digite a idade do cliente" << endl;
    cin >> meu_cliente.idade;
    meu_cliente.idade_c[count] = meu_cliente.idade;

    cout << "id do cliente: " << meu_cliente.clienteId << endl;
    cout << "nome do cliente: " << meu_cliente.nome << endl;
    cout << "idade do cliente: " << meu_cliente.idade << endl;

    while (true)
    {
      printf("sair? (s/n)");
      cin >> exite;

      if (exite == "s" || exite == "S")
      {
        meu_cliente.cad = count;
        exitado();
        
      }
      else
      {
        if (exite == "n" || exite == "N")
        {
          break;
        }
        else
        {
          printf("erro, digite (s para sim / n para nao)");
        }
      }
    }
  }

  return 0;
}

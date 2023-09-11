#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class Pessoa
{
protected:
  string nome;
  int idade;

public:
  mostrarPessoa();
  Pessoa(string _nome, int _idade);
  ~Pessoa();
};

Pessoa::Pessoa(string _nome, int _idade)
{
  nome = _nome;
  idade = _idade;
}

Pessoa::~Pessoa()
{
  cout << "class pessoa foi destruida" << endl;
}

Pessoa::mostrarPessoa()
{

  cout << "mostrando pessoa" << endl;
  cout << "Nome: " << nome << endl;
  cout << "Idade: " << idade << endl;
}

class Cliente : public Pessoa
{
private:
  int salario;

public:
  Cliente(string _nome, int _idade, int _salario);
  mostraCliente();
};

Cliente::Cliente(string _nome, int _idade, int _salario) : Pessoa(_nome, _idade)
{
  salario = _salario;
}

Cliente::mostraCliente()
{
  cout<<endl;
  cout<<"dashboard de "<< nome<<endl;
  cout << "Nome: " << nome << endl;
  cout << "Idade: " << idade << endl;
  cout << "Salario: " << salario << endl;
  getch();
  system("cls");
}

int main(int argc, char const *argv[])
{

  system("title Herança");

  Cliente bruno = Cliente("bruno", 12, 30);
  Cliente carlos = Cliente("carlos", 19, 1000);
  Cliente roger = Cliente("roger", 172, 0);
  Cliente lucy = Cliente("lucy", 20, 15000);
  Cliente usopi = Cliente("usopi", 2, 0);
  Cliente vitor = Cliente("vitor", 12, 30);
  Cliente italo = Cliente("italo", 12, 10);

  bruno.mostraCliente();
  carlos.mostraCliente();
  roger.mostraCliente();
  lucy.mostraCliente();
  usopi.mostraCliente();
  vitor.mostraCliente();
  italo.mostraCliente();

    getch();
    return 0;
}

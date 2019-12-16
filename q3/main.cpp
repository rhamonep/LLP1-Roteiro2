#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"

using namespace std;

int main()
{
     Consultor pessoa1;
     Consultor pessoa2("1234", "Pessoa 2", 1000);
     Consultor pessoa3("5678", "Pessoa 3", 5000);
     Funcionario pessoa4("7777", "Pessoa 4", 10000);

     cout << "Matricula: " << pessoa1.getMatricula() << endl;
     cout << "Nome: " << pessoa1.getNome() << endl;
     cout << "Salario: " << pessoa1.getSalario() << endl;

     cout << endl;

     cout << "Matricula: " << pessoa2.getMatricula() << endl;
     cout << "Nome: " << pessoa2.getNome() << endl;
     cout << "Salario: " << pessoa2.getSalario(40) << endl;

     cout << endl;

     cout << "Matricula: " << pessoa3.getMatricula() << endl;
     cout << "Nome: " << pessoa3.getNome() << endl;
     cout << "Salario: " << pessoa3.getSalario() << endl;

     cout << endl;

     cout << "Matricula: " << pessoa4.getMatricula() << endl;
     cout << "Nome: " << pessoa4.getNome() << endl;
     cout << "Salario: " << pessoa4.getSalario() << endl;


    return 0;
}
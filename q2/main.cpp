#include <iostream>
#include "Pessoa.h"
#include "Endereco.h"

using namespace std;

int main(){
    Endereco endereco1 = Endereco("Rua Juarez Távora", 1573, "Torre", "João Pessoa", "PB", "58040-021");
    Pessoa pessoa1 = Pessoa("Rhamon E. Pires");

    pessoa1.setEndereco(endereco1);

    Endereco endereco2 = Endereco();
    Pessoa pessoa2 = Pessoa("João Pedro Albuquerque", endereco2, "(83)98765-4321");

    cout << "Pessoa 1:" << endl << "Nome: " << pessoa1.getNome() << endl;
    cout << "Endereco: " << pessoa1.getEnderecoToString() << endl << "Telefone: " << pessoa1.getTelefone() << endl;
    cout << endl;
    cout << "Pessoa 2:" << endl << "Nome: " << pessoa2.getNome() << endl;
    cout << "Endereco: " << pessoa2.getEnderecoToString() << endl << "Telefone: " << pessoa2.getTelefone() << endl;

    pessoa1.setTelefone("(88)51515-5151");
    pessoa2.setEndereco(Endereco("Rua dos Escoteiros", 4, "Mangabeira", "João Pessoa", "PB", "99999-888"));
    
    cout << endl;
    cout << "Pessoa 1:" << endl << "Nome: " << pessoa1.getNome() << endl;
    cout << "Endereco: " << pessoa1.getEnderecoToString() << endl << "Telefone: " << pessoa1.getTelefone() << endl;
    cout << endl;
    cout << "Pessoa 2:" << endl << "Nome: " << pessoa2.getNome() << endl;
    cout << "Endereco: " << pessoa2.getEnderecoToString() << endl << "Telefone: " << pessoa2.getTelefone() << endl;

    return 0;
}
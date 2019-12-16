#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(string nome){
    this->nome = nome;
    this->endereco = Endereco();
    this->telefone = "";
}

Pessoa::Pessoa(string nome, Endereco endereco, string telefone){
    this->nome = nome;
    this->endereco = endereco;
    this->telefone = telefone;
}

std::string Pessoa::getNome(){ 
    return nome; 
}

std::string Pessoa::getTelefone(){ 
    return telefone; 
}

Endereco Pessoa::getEndereco(){ 
    return endereco; 
}

string Pessoa::getEnderecoToString(){
    return endereco.toString();
}

void Pessoa::setNome(std::string nome){ 
    this->nome = nome; 
}

void Pessoa::setTelefone(std::string telefone){ 
    this->telefone = telefone; 
}

void Pessoa::setEndereco(Endereco endereco){ 
    this->endereco = endereco; 
}
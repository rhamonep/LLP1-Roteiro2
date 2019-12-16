#include "Endereco.h"

using namespace std;

Endereco::Endereco(){
    this->rua = "";
    this->numero = 0;
    this->bairro = "";
    this->cidade = "";
    this->estado = "";
    this->cep = "";
}

Endereco::Endereco(string rua, int numero, string bairro, string cidade, string estado, string cep){

    this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->cidade = cidade;
    this->estado = estado;
    this->cep = cep;
}

string Endereco::toString(){
    string str = rua + ", " + to_string(numero) + ", " + bairro + ", " + cidade + ", " + estado + " - " + cep;
    return str;
}
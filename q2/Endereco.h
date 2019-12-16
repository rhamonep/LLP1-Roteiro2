#pragma once

#include <string>

using namespace std;

class Endereco{

    private:

        string rua;
        string bairro;
        string cidade;
        string estado;
        string cep;
        int numero;

    public:
        Endereco();
        Endereco(string rua, int numero, string cidade, string estado, string cep, string bairro);

        string toString();
};
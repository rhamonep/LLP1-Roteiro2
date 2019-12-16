#pragma once

#include <string>
#include "Endereco.h"

using namespace std;

class Pessoa{

    private:

        string nome;
        Endereco endereco;
        string telefone;

    public:
    
        Pessoa(string);
        Pessoa(string nome, Endereco endereco, string telefone);

        string getNome();
        string getTelefone();
        Endereco getEndereco();
        string getEnderecoToString();

        void setNome(std::string);
        void setTelefone(std::string);
        void setEndereco(Endereco);
};
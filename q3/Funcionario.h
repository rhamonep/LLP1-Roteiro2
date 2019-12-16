#pragma once

#include <string>

using namespace std;

class Funcionario{

    protected:

        string matricula;
        string nome;
        double salario;

    public:
    
        Funcionario();
        Funcionario(string matricula, string nome, double salario);

        string getMatricula();
        string getNome();
        double getSalario();

        void setMatricula(string matricula);
        void setNome(string nome);
        void setSalario(double salario);
};
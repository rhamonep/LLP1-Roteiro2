#pragma once

#include "Funcionario.h"

using namespace std;

class Consultor : public Funcionario{

    public:

        Consultor();
        Consultor(string matricula, string nome, double salario);
        
        double getSalario();
        double getSalario(float percentual);
};
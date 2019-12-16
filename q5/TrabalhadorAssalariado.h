#pragma once

#include "Trabalhador.h"

using namespace std;

class TrabalhadorAssalariado : public Trabalhador{

    public:

        TrabalhadorAssalariado(string nome, double salario);
        float calcularPagamentoSemanal(int horasSemanais);
};
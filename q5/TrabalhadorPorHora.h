#pragma once

#include "Trabalhador.h"

class TrabalhadorPorHora : public Trabalhador{
    
    private:

        double valorDaHora;

    public:

        TrabalhadorPorHora(string nome, double ValorDaHora);
        float calcularPagamentoSemanal(int);
};
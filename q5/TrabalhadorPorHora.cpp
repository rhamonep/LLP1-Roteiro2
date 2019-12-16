#include "TrabalhadorPorHora.h"

TrabalhadorPorHora::TrabalhadorPorHora(string nome, double valorDaHora) : Trabalhador(nome, 0)
{
    this->valorDaHora = valorDaHora;
}

float TrabalhadorPorHora::calcularPagamentoSemanal(int horas){


    double horasExtra = 0;
    double salarioSemanal;
    
    if(horas > 40){
        horasExtra = (horas - 40);
        horas = 40;
    }
    
    salarioSemanal = (horas * valorDaHora) + (horasExtra * (valorDaHora * 1.5));

    this->salario = salarioSemanal * 4;

    return salarioSemanal;
}
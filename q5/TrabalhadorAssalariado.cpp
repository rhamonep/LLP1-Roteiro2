#include "TrabalhadorAssalariado.h"

TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, double salario) : Trabalhador(nome, salario) {}

float TrabalhadorAssalariado::calcularPagamentoSemanal(int horas){
    return salario / 4;
}
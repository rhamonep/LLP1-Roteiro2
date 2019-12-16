#pragma once

#include <string>

using namespace std;

class Trabalhador
{
protected:
    string nome;
    double salario;
public:
    Trabalhador(string, double);
    
    string getNome();
    double getSalario();
    void setSalario(double salario);
    void setNome(string nome);
    
    virtual float calcularPagamentoSemanal(int);
};
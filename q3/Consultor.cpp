#include "Consultor.h"

using namespace std;

Consultor::Consultor() : Funcionario(){}

Consultor::Consultor(string matricula, string nome, double salario) : Funcionario(matricula, nome, salario){}

double Consultor::getSalario(){ 
    return salario * 1.1; 
}

double Consultor::getSalario(float percentual){ 
    return salario * (1 + (percentual/100)); 
}
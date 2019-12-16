#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario(){
    this->matricula = "";
    this->nome = "";
    this->salario = 0;
}

Funcionario::Funcionario(string matricula, string nome, double salario)
{
    this->matricula = matricula;
    this->nome = nome;
    this->salario = salario;
}

string Funcionario::getMatricula(){ 
    return matricula; 
}
string Funcionario::getNome(){ 
    return nome; 
}
double Funcionario::getSalario(){ 
    return salario; 
}

void Funcionario::setMatricula(std::string matricula){ 
    this->matricula = matricula; 
}
void Funcionario::setNome(std::string nome){ 
    this->nome = nome;
}
void Funcionario::setSalario(double salario){ 
    this->salario = salario; 
}
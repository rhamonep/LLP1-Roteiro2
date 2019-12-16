#include "Trabalhador.h"

using namespace std;

Trabalhador::Trabalhador(std::string nome, double salario){
    this->nome = nome;
    this->salario = salario;
}

string Trabalhador::getNome(){ 
    return nome;    
}

double Trabalhador::getSalario(){
    return salario;
}

void Trabalhador::setNome(string nome){
    this->nome = nome;
}

void Trabalhador::setSalario(double salario){
    this->salario = salario;
}

float Trabalhador::calcularPagamentoSemanal(int horas){ 
    return salario / 4; 
}
#include "Quadrado.h"

Quadrado::Quadrado(string nome, double lado) : FiguraGeometrica(nome) {
    this->lado = lado;
}

double Quadrado::getLado(){
    return lado;
}

void Quadrado::setLado(double lado){
    this->lado = lado;
}

double Quadrado::calculaArea(){ 
    return lado * lado; 
}
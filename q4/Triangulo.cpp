#include "Triangulo.h"

Triangulo::Triangulo(string nome, double base, double altura) : FiguraGeometrica(nome){
    this->base = base;
    this->altura = altura;
}

double Triangulo::getBase(){
    return base;
}

double Triangulo::getAltura(){
    return altura;
}

void Triangulo::setBase(double base){
    this->base = base;
}

void Triangulo::setAltura(double altura){
    this->altura = altura;
}

double Triangulo::calculaArea(){ 
    return base * altura;
}
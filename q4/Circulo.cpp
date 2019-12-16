#include "Circulo.h"

#define PI 3.141592

Circulo::Circulo(string nome, double raio) : FiguraGeometrica(nome) {
    this->raio = raio;
}

double Circulo::getRaio(){
    return raio;
}

void Circulo::setRaio(double raio){
    this->raio = raio;
}

double Circulo::calculaArea(){ 
    return raio * raio * PI; 
}
#include "FiguraGeometrica.h"

FiguraGeometrica::FiguraGeometrica(std::string nome){
    this->nome = nome;
}

string FiguraGeometrica::getNome(){
    return nome;
}

void FiguraGeometrica::setNome(string nome){
    this->nome = nome;
}

double FiguraGeometrica::calculaArea(){ 
    return 0; 
}
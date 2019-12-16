#pragma once

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{

    private:

        double base;
        double altura;

    public:
    
        Triangulo(string nome, double base, double altura);
        double getBase();
        double getAltura();
        void setBase(double base);
        void setAltura(double altura);
        double calculaArea();
};

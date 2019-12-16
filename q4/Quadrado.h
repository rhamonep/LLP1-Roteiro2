#pragma once

#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica{

    private:

        double lado;

    public:

        Quadrado(string nome, double lado);
        double getLado();
        void setLado(double lado);
        double calculaArea();
};
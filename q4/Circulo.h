#pragma once

#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica{

    private:

        double raio;

    public:

        Circulo(string nome, double raio);
        double getRaio();
        void setRaio(double raio);
        double calculaArea();
};
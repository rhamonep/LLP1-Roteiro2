#pragma once

#include <string>

using namespace std;

class FiguraGeometrica{

    protected:

        string nome;

    public:

        FiguraGeometrica(string nome);

        string getNome();
        void setNome(string nome);
        virtual double calculaArea();
        
};
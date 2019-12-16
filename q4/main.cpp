#include <iostream>
#include <vector>
#include "FiguraGeometrica.h"
#include "Quadrado.h"
#include "Triangulo.h"
#include "Circulo.h"

using namespace std;

int main(){
    FiguraGeometrica* figuras[10];

    figuras[0] = new Quadrado("Quadrado 1", 4);
    figuras[1] = new Triangulo("Triangulo 1", 6, 4);
    figuras[2] = new Circulo("Circulo 1", 3);
    figuras[3] = new Quadrado("Quadrado 2", 5);
    figuras[4] = new Circulo("Circulo 2", 10);

    for (int i = 0; i < 5; i++){
        cout << "Figura: " << figuras[i]->getNome() << endl;
        cout << "Area: " << figuras[i]->calculaArea() << endl;
        cout << endl;
    }
}
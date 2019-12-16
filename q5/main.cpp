#include <iostream>
#include <vector>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main(){
    Trabalhador* trabalhadores[10];
    int horas;

    trabalhadores[0] = new TrabalhadorAssalariado("Trabalhador Assalariado 1", 2000);
    trabalhadores[1] = new TrabalhadorPorHora("Trabalhador Por Hora 1", 100);
    trabalhadores[2] = new TrabalhadorPorHora("Trabalhador Por  Hora 2", 100);
    trabalhadores[3] = new TrabalhadorAssalariado("Trabalhador Assalariado 1", 8000);

    for(int i = 0; i < 4; i++){

        cout << "Nome: " << trabalhadores[i]->getNome() << endl;
        cout << "Salario Mensal: " << trabalhadores[i]->getSalario() << endl;
        cout << "Salario Semanal: " << trabalhadores[i]->calcularPagamentoSemanal(i*50) << endl;
        cout << "Salario Mensal: " << trabalhadores[i]->getSalario() << endl;
        cout << endl;
    }
}
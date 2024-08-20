#ifndef CONTROLEVOLUME_H
#define CONTROLEVOLUME_H

#include "Televisao.h"

class ControleVolume : public Televisao
{
public:
    ControleVolume(int volumeN, int canaisN) : Televisao(volumeN, canaisN) {}
    //Controle Volume não possui acesso a todos os métodos da classe pai "Televisao"

    void ProximoCanal() override {
        cout << "Esta classe não pode utilizar este método" << "\n";
    }
    void CanalAnterior() override {
        cout << "Esta classe não pode utilizar este método" << "\n";
    }
    int getTotalCanais() override {
        cout << "Esta classe não pode utilizar este método" << "\n";
        return 1;
    }
    void setTotalCanais(int nada) override {
        cout << "Esta classe não pode utilizar este método" << "\n";
    }
};

#endif 

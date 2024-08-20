#ifndef TELEVISAO
#define TELEVISAO

#include <iostream>
#include <string>

using namespace std;

class Televisao
{
private:
    int volume;
    int total_canais;
    int canal_atual;

public:
    Televisao(int volumeN, int canaisN) : volume(volumeN), total_canais(canaisN), canal_atual(1) {
        setVolume(volumeN);
        setTotalCanais(canaisN);
    }

    virtual void ProximoCanal() {
        if (canal_atual < total_canais) {
            canal_atual++;
        } else {
            canal_atual = 1;
        }
        cout << "Canal: " << canal_atual << "\n";
    }

    virtual void CanalAnterior() {
        if (canal_atual == 1) {
            canal_atual = total_canais;
        } else {
            canal_atual--;
        }
        cout << "Canal: " << canal_atual << "\n";
    }

    void AumentarVolume() {
        setVolume(volume + 1);
    }

    void DiminuirVolume() {
        setVolume(volume - 1);
    }

    int getVolume() {
        return volume;
    }

    void setVolume(int volumeN) {
        if (volumeN <= 100 && volumeN >= 0) {
            volume = volumeN;
            cout << "Volume: " << volume << "\n";
            if (volumeN == 100) {
                cout << "Volume máximo" << "\n";
            } else if (volumeN == 0) {
                cout << "Volume mudo" << "\n";
            }
        } else {
            cout << "Escolha um número de 0 a 100." << "\n";
        }
    }

    virtual int getTotalCanais() {
        return total_canais;
    }

     virtual void setTotalCanais(int canaisN) {
        if (canaisN <= 1000 && canaisN > 0) {
            total_canais = canaisN;
            cout << "Total de canais: " << total_canais << "\n";
        } else {
            cout << "Escolha uma quantidade entre 1 e 1000 para a quantidade de canais." << "\n";
        }
    }
};
#endif 

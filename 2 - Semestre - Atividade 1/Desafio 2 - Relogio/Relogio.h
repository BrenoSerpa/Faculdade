#ifndef RELOGIO
#define RELOGIO
#include <iostream>
#include <string.h>
using namespace std;

struct Horario {
    int horas;
    int minutos;
    int segundos;
};

class Relogio

{ 
private:
    int horas;
    int minutos;
    int segundos;

public:
    Relogio(int hora, int minuto, int segundo)
    {
        setHorario(hora, minuto, segundo);
    }
    
    Horario getHorario() const {
        return {horas, minutos, segundos};
    }

    void setHorario (int hora, int minuto, int segundo) 
    {
        if (hora < 24 && minuto < 61 && segundo < 61 && hora >= 0 && minuto >= 0 && segundo >= 0)
        {
            horas = hora;
            minutos = minuto;
            segundos = segundo;
        } else {
            cout << "Horas são números entre 0 e 24 e minutos e segundos entre 0 e 60.\n";
        }
    }

    void AvancarSegundo()
    {
        cout << "Avançando segundo..." << endl;
        segundos++;
        if (segundos >= 60) {
            segundos = 0;
            minutos++;
            if (minutos >= 60) {
                minutos = 0;
                horas++;
                if (horas >= 24) {
                    horas = 0;
                }
            }
        }
    }

    void MostrarHorario()
    {
        Horario h = getHorario();
        cout << "Hora atual: " << h.horas << ":" << h.minutos << ":" << h.segundos << "\n";
    }
};

#endif

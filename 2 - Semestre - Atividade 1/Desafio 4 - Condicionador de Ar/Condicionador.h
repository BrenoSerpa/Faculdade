#ifndef CONDICIONADOR
#define CONDICIONADOR
#include <iostream>
using namespace std;

class Condicionador
{
private:
    int potencia;
public:
    Condicionador(int potencia)
    {
        setPotencia(potencia);
    }

    float SensorDeTemperatura(float temperatura_ambiente)
    {
        float temperatura_atual = temperatura_ambiente - (1.8 * potencia);
        cout << "A temperatura atual é de " << temperatura_atual << "°C.\n";
        return temperatura_atual;
    }

    int getPotencia(){ return potencia;}

    void setPotencia(int potenciaN)
    {
        if (potenciaN >= 0 && potenciaN <= 10)
        {
            potencia = potenciaN;
        } else {
            cout << "Escolha uma opção entre 0 e 10 para a potência do aparelho.\n";
        }
    }

};
#endif
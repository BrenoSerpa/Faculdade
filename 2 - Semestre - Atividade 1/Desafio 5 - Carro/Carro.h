#ifndef CARRO
#define CARRO
#include <iostream>
using namespace std;
class Carro
{
private:
    float tanque_de_combustivel; //em litros
    float quilometragem;

public:
    Carro() : tanque_de_combustivel(0), quilometragem(0) {}

    void AbastecerCarro(float quantidade)
    {
        if (quantidade <= 0) {
            cout << "Quantidade inválida para abastecimento.";
            return;
        }
        tanque_de_combustivel += quantidade;
        if (tanque_de_combustivel > 50) {
            tanque_de_combustivel = 50;
        }
    }

    void MoverCarro(float distancia)
    {
        float combustivelNecessario = distancia / 15.0;
        if (combustivelNecessario > tanque_de_combustivel) {
            std::cout << "Combustível insuficiente para mover essa distância." << std::endl;
        } else {
            tanque_de_combustivel -= combustivelNecessario;
            quilometragem += distancia;
        }
    }
    
    float getTanque() const
    {   
        return tanque_de_combustivel;
    }
    void setTanque(float tanque)
    {
        if (tanque <= 50 && tanque >= 0) {
            tanque_de_combustivel = tanque;
        } else {
            cout << "O tanque deve ter entre 0 e 50 litros de combustível";
        }
    }

    float getQuilometragem() const
    {
        return quilometragem;
    }
};
#endif
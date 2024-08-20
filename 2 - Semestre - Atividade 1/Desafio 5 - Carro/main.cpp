#include "Carro.h"
#include <locale.h>
int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    Carro carro1, carro2;

    carro1.AbastecerCarro(20);
    carro2.AbastecerCarro(30);

    carro1.MoverCarro(200);
    carro2.MoverCarro(400);

    cout << "Carro 1 - Distância percorrida: " << carro1.getQuilometragem() 
              << " km, Combustível restante: " << carro1.getTanque() << " litros\n";

    cout << "Carro 2 - Distância percorrida: " << carro2.getQuilometragem() 
              << " km, Combustível restante: " << carro2.getTanque() << " litros\n";

    return 0;
}
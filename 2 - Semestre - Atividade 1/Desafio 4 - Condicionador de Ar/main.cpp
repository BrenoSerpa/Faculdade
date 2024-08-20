#include "Condicionador.h"
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    Condicionador condicionador1(2);
    condicionador1.SensorDeTemperatura(25);

    Condicionador condicionador2(5);
    condicionador2.SensorDeTemperatura(31);
    return 0;
}
#include "Televisao.h"
#include "ControleVolume.h"
#include "ControleCanal.h"
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    cout << "Cria um objeto da Classe ControleVolume.\n";
    ControleVolume controle_de_volume(50, 200);  
    controle_de_volume.AumentarVolume();
    controle_de_volume.DiminuirVolume();
    controle_de_volume.ProximoCanal();
    controle_de_volume.CanalAnterior();

    cout << "Cria um objeto da Classe ControleCanal.\n";
    ControleCanal controle_de_canal(42,142);
    controle_de_canal.DiminuirVolume();
    controle_de_canal.AumentarVolume();
    controle_de_canal.ProximoCanal();
    controle_de_canal.CanalAnterior();

    return 0;
}
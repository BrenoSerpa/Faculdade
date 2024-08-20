#include "Elevador.h"
#include <locale.h>
using namespace std;

int main () 
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    int andarA;
    int totalA;
    int capacidade;
    int pessoas;

    cout << "Seleciona o andar atual: ";
    cin >> andarA;
    cout << "Seleciona a quantidade total de andares: ";
    cin >> totalA;
    cout << "Seleciona a capacidade de pessoas do elevador: ";
    cin >> capacidade;
    cout << "Seleciona a quantidade de pessoas no elevador atualmente: ";
    cin >> pessoas;

    Elevador meu_elevador(andarA,totalA,capacidade,pessoas); //andar atual, total de andares, capacidade, pessoas no elevador
    cout << "Andar atual: " << meu_elevador.get_andar() << "\n";    
    cout << "total andares: " << meu_elevador.get_total_andares() << "\n";
    cout << "Capacidade: " << meu_elevador.get_capacidade() << "\n";
    cout << "Pessoas: " << meu_elevador.get_pessoas() << "\n";
    
    meu_elevador.sobe();
    meu_elevador.desce();
    meu_elevador.entra();
    meu_elevador.sai();

    cout << "Andar atual: " << meu_elevador.get_andar() << "\n";    
    cout << "total andares: " << meu_elevador.get_total_andares() << "\n";
    cout << "Capacidade: " << meu_elevador.get_capacidade() << "\n";
    cout << "Pessoas: " << meu_elevador.get_pessoas() << "\n";
    return 0;
}
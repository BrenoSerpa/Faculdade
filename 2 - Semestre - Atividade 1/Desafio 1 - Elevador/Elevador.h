#ifndef ELEVADOR
#define ELEVADOR
#include <iostream>
#include <string.h>
using namespace std;

class Elevador
{
private:
    int andar_atual;
    int total_andares;
    int capacidade; 
    int pessoas;
    
public:
    Elevador(int andar, int total_andares, int capacidade,  int pessoas) //contructor
    {
        set_andar(andar);
        set_total_andares(total_andares);
        set_capacidade(capacidade);
        set_pessoas(pessoas);
    }

    void entra() 
    {
        if (pessoas <= capacidade) {
            pessoas += 1;
            cout << "Total de pessoas no elevador: " << pessoas << "\n";
        } else {
            cout << "O elevador não suporta mais pessoas." << "\n";
        }
    }
    void sai()
    {
        if (pessoas > 0) {
            pessoas -= 1;
            cout << "Total de pessoas no elevador: " << pessoas << "\n";
        } else {
            cout << "Não podem haver menos de zero pessoas no elevador." << "\n";
        }
    }
    void sobe()
    {
        if (andar_atual <= total_andares) {
            andar_atual += 1;
            cout << "Andar atual: " << andar_atual << "\n";
        } else {
            cout << "Chegou ao último andar." << "\n";
        }
    }
    void desce()
    {
        if (andar_atual > 0) {
            andar_atual -= 1;
            cout << "Andar atual: " << andar_atual << "\n";
        } else if (andar_atual == 0) {
            cout << "Chegou ao Térreo." << "\n";
        } else {
            cout << "Selecione um número maior do que zero" << "\n";
        }
        
    }

    int get_andar () const
    {
        return andar_atual;
    }
    void set_andar (int andarN)
    {
        if (andarN >= 0) {
            andar_atual = andarN;
        } else {
            cout << "O andar solicitado não existe." << "\n";
        }
    }

    int get_total_andares () const
    {
        return total_andares;
    }
    void set_total_andares (int total_andaresN)
    {
        if (total_andaresN > 0) {
            total_andares = total_andaresN;
        } else {
            cout << "O total de andares não pode ser menor do que um." << "\n";
        }
    }

    int get_capacidade () const
    {
        return capacidade;
    }
    void set_capacidade (int capacidadeN)
    {
        if (capacidadeN > 0) {
            capacidade = capacidadeN;
        } else {
            cout << "A capacidade não pode ser menor do que zero." << "\n";
        } 
    }

    int get_pessoas () const
    {
        return pessoas;
    }
    void set_pessoas (int pessoasN)
    {
        if (pessoasN >= 0 && pessoasN <= capacidade)
        {
            pessoas = pessoasN;
        } else {
            cout << "Não podem haver menos de zero pessoas. Escolha um número válido" << "\n";
        }
    }
    
};
#endif
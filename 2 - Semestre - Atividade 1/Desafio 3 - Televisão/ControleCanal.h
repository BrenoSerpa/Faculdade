#ifndef CONTROLECANAL_H
#define CONTROLECANAL_H

#include "Televisao.h"

class ControleCanal : public Televisao
{
public:
    ControleCanal(int volumeN, int canaisN) : Televisao(volumeN, canaisN) {}
    //Controle canal possui acesso a todos os métodos da classe pai "Televisao"
    
};

#endif 

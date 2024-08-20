#include "Relogio.h"
#include <locale.h>

int main () {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    Relogio relogin(23,59,59);
    relogin.MostrarHorario();
    relogin.AvancarSegundo();
    relogin.MostrarHorario();
    
}
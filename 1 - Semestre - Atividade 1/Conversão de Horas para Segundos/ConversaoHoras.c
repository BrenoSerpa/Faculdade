#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    int horas, segundos = 0; //Declarando as variáveis
    printf("Horas: ");
    scanf("%d", &horas);
    segundos = horas * 3600;
    printf("%d hora(s) em segundos são: %d segundos\n", horas, segundos);
    system("pause"); 
    return 0;
}
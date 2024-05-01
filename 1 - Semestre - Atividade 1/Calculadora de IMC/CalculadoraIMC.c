#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    float peso, altura, IMC = 0; //Declarando as variáveis
    printf("Digite seu peso: ");
    scanf("%f", &peso);
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    IMC = peso / (altura*altura);
    printf("Seu IMC é de: %0.2f\n", IMC);
    system("pause"); 
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    float distancia, velocidade, tempo = 0; //Declarando as variáveis
    printf("Insira a distância a ser percorrida pelo veículo: ");
    scanf("%f", &distancia);
    printf("Insira a velocidade média do veículo: ");
    scanf("%f", &velocidade);
    tempo = (distancia/velocidade);
    if (tempo < 1)
    {
        tempo = tempo * 60;
        printf("O tempo até a chegada será de: %0.1f minutos.\n",tempo);
    }
    else
    {
        printf("O tempo até a chegada será de: %0.3f horas.\n",tempo);
    }
    system("pause"); 
    return 0;
}
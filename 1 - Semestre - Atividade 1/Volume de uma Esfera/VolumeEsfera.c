#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
    float raio, volume = 0;  //Declarando as variáveis
    printf("Insira o valor do raio em centímetros de uma esfera: ");
    scanf("%f", &raio);
    volume = 4* 3.14159 * (powf(raio,3))/3; //Utilizamos a função "powf" da biblioteca math.h para realizar a operação de potência
    printf("O volume dado o raio %0.2f é de aproximadamente: %0.4f\n", raio, volume);
    system("pause"); 
    return 0;

}
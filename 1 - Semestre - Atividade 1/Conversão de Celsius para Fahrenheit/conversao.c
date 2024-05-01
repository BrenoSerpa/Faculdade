#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    float temp, EmFahrenheit = 0; //Declarando as variáveis
    printf("Insira o valor em graus Celsius a ser convertido para Fahrenheit: ");
    scanf("%f", &temp);
    EmFahrenheit = (temp*9/5)+32; 
    printf("A temperatura quando convertida é de: %0.2f\n", EmFahrenheit);
    system("pause"); 
    return 0;
}
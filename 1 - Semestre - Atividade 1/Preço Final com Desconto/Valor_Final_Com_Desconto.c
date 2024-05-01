#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    float valor, porcentagem, desconto = 0, valor_final = 0; //Declarando as variáveis
    printf("Insira o preço do produto: ");
    scanf("%f", &valor);
    printf("Insira o desconto em porcentagem a ser aplicado: ");
    scanf("%f", &porcentagem);
    desconto = valor * porcentagem/100;
    valor_final = valor - desconto;
    printf("O desconto será de: R$%0.2f\n",desconto);
    printf("E o valor final será de: R$%0.2f\n", valor_final);
    system("pause"); 
    return 0;
}
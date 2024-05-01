#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    float base, altura, area = 0; //Declarando as variáveis
    printf("Insira o valor da base:");
    scanf("%f", &base);
    printf("Insira o valor da altura: ");
    scanf("%f", &altura);
    area = base*altura;
    printf("A área do retângulo é de: %0.2f\n", area);
    system("pause"); 
    return 0;
}
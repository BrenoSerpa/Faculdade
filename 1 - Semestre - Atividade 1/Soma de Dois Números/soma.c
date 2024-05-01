#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int a, b, result = 0;    //Declarando as variáveis
    printf("Digite dois números a serem somados: ");
    scanf("%d%d", &a, &b);   //Receber os valores de das varíaveis
    result = a + b;          //Realizar a soma
    printf("O resultado é: %d\n", result);  //Exibir o resultado
    system("pause");         //Utilizado para não fechar imediatamente a janela de execução e permitir
    return 0;                //visualização do output
}
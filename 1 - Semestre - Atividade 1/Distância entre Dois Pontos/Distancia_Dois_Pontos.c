#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (void)
{
    int ponto1X, ponto1Y, ponto2X, ponto2Y; //Declarando as variáveis
    printf("Digite o X e o Y do primeiro ponto do plano cartesiano: ");
    scanf("%d\n%d", &ponto1X, &ponto1Y);
    printf("Digite o segundo ponto do plano cartesiano: ");
    scanf("%d\n%d",&ponto2X,&ponto2Y);
    float distancia = sqrt(pow(ponto2X - ponto1X,2) + pow(ponto2Y - ponto1Y, 2)); //Utilizamos a função "pow" e "sqrt" da biblioteca math.h para realizar as operações de potência e raiz quadrada 
    printf("A distância entre os pontos (%d,%d) e (%d,%d) é: %0.3f\n",ponto1X,ponto1Y,ponto2X,ponto2Y, distancia);
    system("pause"); 
    return 0;

}
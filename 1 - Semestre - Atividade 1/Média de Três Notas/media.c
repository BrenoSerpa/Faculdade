#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    float n1, n2, n3, media = 0;      //Declarando as variáveis
    printf("Insira três notas: ");
    scanf("%f%f%f",&n1,&n2,&n3);      
    media = (n1 + n2 + n3)/3;         //Realizando as operações para chegar na média
    printf("A média é de %0.2f\n", media);
    system("pause");                 
    return 0;
}